/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobert- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:17:33 by drobert-          #+#    #+#             */
/*   Updated: 2022/02/16 12:39:23 by drobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;
	char	*src_p;
	char	*dst_p;

	i = -1;
	dst_p = (char *)dst;
	src_p = (char *)src;
	while (++i < (int)n)
		*(dst_p + i) = *(src_p + i);
	return (dst);
}
