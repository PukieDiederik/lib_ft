/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobert- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:26:04 by drobert-          #+#    #+#             */
/*   Updated: 2022/02/15 15:03:23 by drobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;
	int	j;

	i = len;
	if (dst > src)
	{
		while (--i >= 0)
			*((char *)dst + i) = *((char *)src + i);
	}
	else
	{
		j = -1;
		while (++j <= i)
			*((char *)dst + j) = *((char *)src + j);
	}
	return (dst);
}
