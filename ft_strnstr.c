/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobert- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:30:59 by drobert-          #+#    #+#             */
/*   Updated: 2022/02/16 12:56:08 by drobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	int	i;
	int	j;

	i = -1;
	while (++i < (int)n && *(haystack + i))
	{
		j = 0;
		while (*(needle + j) && *(haystack + i + j) && i + j < (int)n
			&& *(needle + j) == *(haystack + i + j))
			j++;
		if (*(needle + j) == 0)
			return ((char *)(haystack + i));
	}
	return (0);
}
