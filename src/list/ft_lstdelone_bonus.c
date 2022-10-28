/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobert- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:16:38 by drobert-          #+#    #+#             */
/*   Updated: 2022/02/18 17:17:48 by drobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_lstdelone
 * Deletes a node
 *
 * lst - the node to delete
 * del - the function to delete the content of a node
 */
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}
