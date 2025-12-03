/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 11:37:14 by anfouger          #+#    #+#             */
/*   Updated: 2025/12/03 15:01:02 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	rra(t_stack *stack)
{
	if (!stack || !stack->top || stack->size < 2)
		return ;
	stack->top = stack->top->prev;
	write(1, "rra\n", 3);
}

void	rrb(t_stack *stack)
{
	if (!stack || !stack->top || stack->size < 2)
		return ;
	stack->top = stack->top->prev;
	write(1, "rrb\n", 3);
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	if (!stack_a || !stack_a->top || stack_a->size < 2
		|| !stack_b || !stack_b->top || stack_b->size < 2)
		return ;
	stack_a->top = stack_a->top->prev;
	stack_b->top = stack_b->top->prev;
	write(1, "rrr\n", 3);
}
