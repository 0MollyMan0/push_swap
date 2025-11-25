/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 11:36:09 by anfouger          #+#    #+#             */
/*   Updated: 2025/11/25 17:22:23 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	t_node *new_top_a;
	t_node *new_top_b;
	t_node *last_b;
	
	if (!(*stack_a) || !(*stack_a) || !(*stack_a)->top || (*stack_a)->size < 1)
        return ;
	new_top_a = (*stack_b)->top;
	new_top_b = (*stack_b)->top->next;
	free((*stack_b)->top);
	(*stack_b)->top = new_top_b;
	last_b = ft_lstlast((*stack_b)->top, (*stack_b)->size);
	(*stack_b)->top->prev = last_b;
	last_b->next = (*stack_b)->top;
	ft_stack_add_front(&(*stack_a), new_top_a);
	(*stack_a)->size++;
	(*stack_b)->size--;
	write(1, "pa\n", 3);
}

void	pb(t_stack **stack)
{ 
	int tmp;
	
	if (!(*stack) || !(*stack)->top || (*stack)->size < 2)
        return ;
    tmp = (*stack)->top->data;
	(*stack)->top->data = (*stack)->top->next->data;
	(*stack)->top->next->data = tmp;
	write(1, "pb\n", 3);
}
