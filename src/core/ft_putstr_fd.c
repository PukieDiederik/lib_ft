/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobert- <drobert-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 23:09:41 by drobert-          #+#    #+#             */
/*   Updated: 2022/02/23 18:43:23 by drobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_putstr_fd
 * writes a string into fd
 *
 * str - the string to write
 * fd - The fd to write to
 */
void	ft_putstr_fd(char *str, int fd)
{
	if (str)
		while (*str)
			write(fd, str++, 1);
}
