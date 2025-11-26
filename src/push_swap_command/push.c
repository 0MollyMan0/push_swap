/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 11:36:09 by anfouger          #+#    #+#             */
/*   Updated: 2025/11/26 08:53:00 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>


void	del_top(t_stack **stack)
{
	t_node	*new_top;
	t_node	*last;
	
	new_top = (*stack)->top->next;
	if ((*stack)->size > 1)
	{
		last = (*stack)->top->prev;
		new_top->prev = last;
		last->next = new_top;
	}
	else
		new_top = NULL;
	(*stack)->top = new_top;
	(*stack)->size--;
}

void	insert_top(t_stack **stack, t_node *new_top)
{
	t_node	*old_top;
	t_node	*last;
	
	if ((*stack)->size == 0)
	{
		new_top->next = new_top;
		new_top->prev = new_top;
		(*stack)->top = new_top;
	}
	else
	{
		old_top = (*stack)->top;
		last = old_top->prev;
		old_top->prev = new_top;
		last->next = new_top;
		new_top->prev = last;
		new_top->next = old_top;
		(*stack)->top = new_top;
	}
	(*stack)->size++;
}
void	pa(t_stack **stack_a, t_stack **stack_b)
{
	t_node *new_top_a;
	
	if (!stack_b || !(*stack_b) || (*stack_b)->size == 0)
		return ;
	new_top_a = (*stack_b)->top;
	del_top(&(*stack_b));
	insert_top(&(*stack_a), new_top_a);
	write(1, "pa\n", 3);
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	t_node *new_top_b;
	
	if (!stack_a || !(*stack_a) || (*stack_a)->size == 0)
		return ;
	new_top_b = (*stack_a)->top;
	del_top(&(*stack_a));
	insert_top(&(*stack_b), new_top_b);
	write(1, "pb\n", 3);
}
