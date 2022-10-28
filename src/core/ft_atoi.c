/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobert- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:28:20 by drobert-          #+#    #+#             */
/*   Updated: 2022/02/18 14:22:29 by drobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_atoi
 * Converts a string into an int
 *
 * str - The string to convert into an int
 */
int	ft_atoi(const char *str)
{
	long	num;
	int		is_neg;

	num = 0;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	is_neg = 1;
	if (*str == '-')
	{
		is_neg = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
		num = (num * 10) + (*str++ - '0');
	return (num * is_neg);
}
