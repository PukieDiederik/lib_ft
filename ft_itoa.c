/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobert- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:47:41 by drobert-          #+#    #+#             */
/*   Updated: 2022/02/17 16:25:09 by drobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	abs_(int n)
{
	long	num;

	num = n;
	if (n < 0)
		num *= -1;
	return (num);
}

static int	calc_num_l(long n)
{
	int	length;

	length = 1;
	if (n < 0)
	{
		length++;
		n *= -1;
	}
	while (n > 9)
	{
		length++;
		n /= 10;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	long	num;
	int		length;
	char	*num_str;

	num = abs_(n);
	length = calc_num_l(n);
	num_str = (char *)malloc((length + 1) * sizeof(char));
	if (num_str == 0)
		return (0);
	num_str[length] = 0;
	while (length > 0)
	{
		*(num_str + length - 1) = (num % 10) + '0';
		num /= 10;
		length--;
	}
	if (n < 0)
		num_str[0] = '-';
	return (num_str);
}
