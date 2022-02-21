/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobert- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:13:21 by drobert-          #+#    #+#             */
/*   Updated: 2022/02/21 15:50:05 by drobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		s;
	char	*ptr;

	s = count * size;
	ptr = (char *)malloc(s);
	if (ptr == 0)
		return (0);
	ft_memset(ptr, 0, s);
	return (ptr);
}
