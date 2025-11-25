/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 11:51:06 by anfouger          #+#    #+#             */
/*   Updated: 2025/11/25 16:06:11 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_lstadd_back(t_node **lst, t_node *new, int size)
{
	t_node	*last;
	
	if (!lst || !new)
		return ;
	if (!(*lst))
	{
		(*lst) = new;
		return ;
	}
	(*lst)->prev = new;
	new->next = (*lst);
	last = ft_lstlast((*lst), size);
	last->next = new;
	new->prev = last;
}
