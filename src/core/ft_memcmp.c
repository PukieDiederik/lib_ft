/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobert- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:46:17 by drobert-          #+#    #+#             */
/*   Updated: 2022/02/16 11:17:09 by drobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				i;
	unsigned char	*s1p;
	unsigned char	*s2p;

	i = -1;
	s1p = (unsigned char *)s1;
	s2p = (unsigned char *)s2;
	while (++i < (int)n && *s1p == *s2p)
	{
		s1p++;
		s2p++;
	}
	if (i < (int)n)
		return ((*s1p) - (*s2p));
	return (0);
}
