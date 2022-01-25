/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: kjonker <kjonker@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/25 10:31:31 by kjonker       #+#    #+#                 */
/*   Updated: 2022/01/25 15:24:08 by kjonker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*listmap;

	if (!lst)
		return (NULL);
	listmap = NULL;
	while (lst != NULL)
	{
		temp = ft_lstnew_bonus((*f)(lst->content));
		if (temp == NULL)
			ft_lstclear_bonus(&listmap, (*del));
		else
			ft_lstadd_back_bonus(&listmap, temp);
		lst = lst->next;
	}
	return (listmap);
}
