/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobert- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:35:28 by drobert-          #+#    #+#             */
/*   Updated: 2022/02/18 14:20:49 by drobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	words;
	int	in_word;

	in_word = 0;
	words = 0;
	while (*s)
	{
		if (in_word == 0 && *s != c)
		{
			in_word = 1;
			words++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (words);
}

//this assumes that s does not start with a `c`
char	*split_word(const char *s, char c)
{
	int		size;
	char	*str;
	int		i;

	size = 0;
	while (*(s + size) != c && *(s + size))
		size++;
	str = (char *)malloc((size + 1) * sizeof(char));
	if (str == 0)
		return (0);
	i = -1;
	while (++i < size)
		*(str + i) = *(s + i);
	*(str + i) = 0;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		wc;
	int		i;
	char	**strs;

	if (s == 0)
		return (0);
	wc = count_words(s, c);
	strs = (char **)malloc(sizeof(char *) * (wc + 1));
	if (strs == 0)
		return (0);
	strs[wc] = 0;
	i = -1;
	while (*s && *s == c)
		s++;
	while (++i < wc)
	{
		*(strs + i) = split_word(s, c);
		while (*s && *s != c)
			s++;
		while (*s && *s == c)
			s++;
	}
	return (strs);
}
