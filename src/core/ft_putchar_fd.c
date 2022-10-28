/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobert- <drobert-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 22:54:05 by drobert-          #+#    #+#             */
/*   Updated: 2022/02/17 23:07:46 by drobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_putchar_fd
 * writes a char into fd
 *
 * c - The char to write
 * fd - The fd to write to
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
