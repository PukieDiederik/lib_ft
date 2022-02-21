/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobert- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:26:04 by drobert-          #+#    #+#             */
/*   Updated: 2022/02/21 15:47:05 by drobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	if (!dst && !src)
		return (0);
	i = len;
	if (dst > src)
	{
		while (--i >= 0)
			*((char *)dst + i) = *((char *)src + i);
	}
	else
	{
		i = -1;
		while (++i < (int)len)
			*((char *)dst + i) = *((char *)src + i);
	}
	return (dst);
}
