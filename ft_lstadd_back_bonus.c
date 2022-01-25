/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back_bonus.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: kjonker <kjonker@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 17:19:11 by kjonker       #+#    #+#                 */
/*   Updated: 2022/01/25 15:23:46 by kjonker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lastblock;

	if (lst == NULL)
		return ;
	if (!(*lst))
		*lst = new;
	else
	{
		lastblock = ft_lstlast_bonus (*lst);
		lastblock->next = new;
	}
}
