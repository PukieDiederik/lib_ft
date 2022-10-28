/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobert- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:24:54 by drobert-          #+#    #+#             */
/*   Updated: 2022/02/16 12:39:07 by drobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_memchr
 * Looks for a byte in a section of memory and if found returns it's pointer
 *
 * s - The memory to check
 * c - the byte to check
 * n - Max length to check
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;

	i = -1;
	while (++i < (int)n)
		if (*((unsigned char *)s + i) == (unsigned char)c)
			return ((char *)s + i);
	return (0);
}
