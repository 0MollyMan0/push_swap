/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 11:47:08 by anfouger          #+#    #+#             */
/*   Updated: 2025/12/03 15:03:38 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_lstadd_front(t_node *lst, t_node *new)
{
	if (!lst || !new)
		return ;
	new->next = lst;
	lst = new;
}

void	ft_stack_add_front(t_stack *stack, t_node *new)
{
	t_node	*last;

	last = ft_lstlast(stack->top, stack->size);
	stack->top->prev = new;
	last->next = new;
	stack->top = new;
}
