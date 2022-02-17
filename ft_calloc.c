/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobert- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:13:21 by drobert-          #+#    #+#             */
/*   Updated: 2022/02/16 17:27:07 by drobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		s;
	int		i;
	char	*ptr;

	s = count * size;
	ptr = (char *)malloc(s);
	i = -1;
	while (++i < (int)size)
		*(ptr + i) = 0;
	return (ptr);
}