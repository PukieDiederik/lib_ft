/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobert- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:44:57 by drobert-          #+#    #+#             */
/*   Updated: 2022/02/14 15:13:10 by drobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	dst_len;
	int	src_len;
	int	n;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (src_len == 0)
		return (dst_len);
	n = -1;
	while (++n < (int)dstsize - dst_len - 1 && *(src + n))
		*(dst + n + dst_len) = *(src + n);
	if (n == 0)
		return (dst_len + dstsize - 1);
	*(dst + n + dst_len) = 0;
	return (dst_len + src_len);
}
