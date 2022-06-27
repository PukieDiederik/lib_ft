/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobert- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:14:15 by drobert-          #+#    #+#             */
/*   Updated: 2022/02/18 15:20:30 by drobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size)
{
	unsigned int	n;
	int				src_len;

	n = -1;
	src_len = ft_strlen(src);
	if (dst_size == 0)
		return (src_len);
	while (*src && ++n < dst_size - 1)
		*dst++ = *src++;
	*dst = 0;
	return (src_len);
}
