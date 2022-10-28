/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobert- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:19:38 by drobert-          #+#    #+#             */
/*   Updated: 2022/02/18 17:23:14 by drobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_lstclear
 * Frees an entire list
 *
 * lst - The list, will be set to NULL
 * del - the function to delete the content of a node
 */
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;
	t_list	*cur;

	cur = *lst;
	while (cur)
	{
		next = cur->next;
		del(cur->content);
		free(cur);
		cur = next;
	}
	*lst = 0;
}
