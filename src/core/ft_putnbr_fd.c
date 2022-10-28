/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobert- <drobert-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 23:12:37 by drobert-          #+#    #+#             */
/*   Updated: 2022/02/18 13:26:08 by drobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_putnbr_fd
 * writes a number to fd
 *
 * n - number to write
 * fd - The fd to write to
 */
void	ft_putnbr_fd(int n, int fd)
{
	long	divider;
	long	num;
	char	c;

	divider = 1;
	num = n;
	if (num < 0)
	{
		num *= -1;
		write(fd, "-", 1);
	}
	while (num / divider > 9)
		divider *= 10;
	while (divider > 0)
	{
		c = ((num / divider) % 10) + '0';
		write(fd, &c, 1);
		divider /= 10;
	}
}
