/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobert- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 10:58:04 by drobert-          #+#    #+#             */
/*   Updated: 2022/02/23 18:45:27 by drobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//assuming NULL termination because no size is given
static int	is_in_set(const char *set, const char c)
{
	while (*set)
		if (*set++ == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start_size;
	int		end_size;
	char	*str;

	if (!s1)
		return (0);
	start_size = 0;
	end_size = ft_strlen(s1) - 1;
	while (is_in_set(set, *(s1 + start_size)))
		start_size++;
	while (is_in_set(set, *(s1 + end_size)) && end_size >= 0)
		end_size--;
	if (end_size < 0)
		return (ft_calloc(sizeof(char), 1));
	str = ft_substr(s1, start_size, end_size + 1 - start_size);
	return (str);
}
