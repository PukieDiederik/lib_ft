/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobert- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:44:57 by drobert-          #+#    #+#             */
/*   Updated: 2022/02/21 15:48:16 by drobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	n;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	n = -1;
	while (src[++n] && n + dst_len + 1 < dstsize)
		dst[dst_len + n] = src[n];
	if (dstsize <= dst_len)
		return (src_len + dstsize);
	dst[dst_len + n] = 0;
	return (src_len + dst_len);
}
