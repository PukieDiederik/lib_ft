/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobert- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:00:33 by drobert-          #+#    #+#             */
/*   Updated: 2022/02/14 13:09:07 by drobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_toupper
 * Converts a character to uppercase
 *
 * c - The character to convert
 */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	return (c);
}
