/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobert- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:04:05 by drobert-          #+#    #+#             */
/*   Updated: 2022/02/14 13:09:15 by drobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_tolower
 * Converts a character to lowercase
 *
 * c - The character to convert
 */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}
