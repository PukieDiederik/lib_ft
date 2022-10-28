/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobert- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:41:56 by drobert-          #+#    #+#             */
/*   Updated: 2022/02/14 15:04:48 by drobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_strlen
 * Gets the length of a string
 *
 * str - the string to check
 */
size_t	ft_strlen(const char *str)
{
	int	c;

	c = 0;
	while (*str++)
		c++;
	return (c);
}
