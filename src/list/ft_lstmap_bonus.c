/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobert- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:27:03 by drobert-          #+#    #+#             */
/*   Updated: 2022/02/21 15:54:52 by drobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_lstmap
 * Copies the list and applies a function to this copy
 *
 * lst - The list
 * f - the function to apply
 * del - A function to delete the content of nodes (in case of malloc error)
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*cur;
	t_list	*current;

	start = 0;
	current = lst;
	while (current)
	{
		cur = ft_lstnew(f(current->content));
		if (cur == 0)
		{
			ft_lstclear(&start, del);
			return (0);
		}
		ft_lstadd_back(&start, cur);
		current = current->next;
	}
	return (start);
}
