/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobert- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:10:32 by drobert-          #+#    #+#             */
/*   Updated: 2022/02/18 13:27:50 by drobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_strchr
 * Finds a char in a string and returns the pointer that that char
 *
 * s - The string to check
 * c - The char to check for
 */
char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char)c)
		s++;
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}
