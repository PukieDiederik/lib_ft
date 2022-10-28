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

#include <limits.h>
#include "libft.h"

/* ft_calloc
 * Allocates memory and sets it to 0
 *
 * count - the amount of 'elements to allocate
 * size - the size of an 'element
 */
void	*ft_calloc(size_t count, size_t size)
{
	unsigned long long	s;
	char			*ptr;

	s = count * size;
	if (s != 0 && s / size != count)
		return (0);
	ptr = (char *)malloc(s);
	if (ptr == 0)
		return (0);
	ft_memset(ptr, 0, s);
	return (ptr);
}
