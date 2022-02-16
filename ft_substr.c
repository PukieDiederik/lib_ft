/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobert- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:05:03 by drobert-          #+#    #+#             */
/*   Updated: 2022/02/16 17:36:46 by drobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	int		i;
	int		size;
	char	*str;

	i = 0;
	while (i++ <= (int)start)
		s++;
	size = ft_strlen(s) + 1;
	if (size > (int)len)
		size = len;
	str = (char *)malloc(size);
	if (str == 0)
		return (0);
	str[size - 1] = 0;
	i = -1;
	while (++i < (int)size)
		str[i] = s[i];
	return (str);
}
