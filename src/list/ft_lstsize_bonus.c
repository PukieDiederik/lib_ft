/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobert- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:02:24 by drobert-          #+#    #+#             */
/*   Updated: 2022/02/18 17:06:19 by drobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_lstsize
 * Gets the size of the list
 *
 * lst - The list
 */
int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst != 0)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
