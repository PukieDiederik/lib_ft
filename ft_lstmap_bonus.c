/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobert- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:27:03 by drobert-          #+#    #+#             */
/*   Updated: 2022/02/18 17:47:18 by drobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Yes, I know, del is useless but I had to use it because compiler flags
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*prev;
	t_list	*cur;
	t_list	*current;

	start = ft_lstnew(0);
	prev = start;
	current = lst;
	while (current)
	{
		cur = ft_lstnew(f(current->content));
		if (cur == 0)
			break ;
		prev->next = cur;
		prev = cur;
		current = current->next;
	}
	prev = start->next;
	del(start->content);
	free(start);
	return (prev);
}
