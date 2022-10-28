/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobert- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:44:13 by drobert-          #+#    #+#             */
/*   Updated: 2022/02/23 18:44:33 by drobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_striteri
 * Applies a function to each char of a string
 *
 * s - The string to apply the function to
 * f - The function to apply
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	len;
	unsigned int	i;

	if (!s)
		return ;
	len = ft_strlen(s);
	i = 0;
	while (i < len)
	{
		f(i, s + i);
		i++;
	}
}
