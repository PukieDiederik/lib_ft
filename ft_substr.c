/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobert- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:05:03 by drobert-          #+#    #+#             */
/*   Updated: 2022/02/23 18:40:38 by drobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	int		i;
	int		size;
	char	*str;

	if (!s)
		return (0);
	i = 0;
	while (i++ < (int)start && *s)
		s++;
	size = ft_strlen(s);
	if (size > (int)len)
		size = len;
	str = (char *)malloc((size + 1) * sizeof(char));
	if (str == 0)
		return (0);
	str[size] = 0;
	i = -1;
	while (++i < (int)size)
		str[i] = s[i];
	return (str);
}
