/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobert- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:04:55 by drobert-          #+#    #+#             */
/*   Updated: 2022/02/16 12:39:40 by drobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	fill;
	int				i;

	fill = (unsigned char) c;
	i = -1;
	while (++i < (int)len)
		*(unsigned char *)(b + i) = fill;
	return (b);
}
