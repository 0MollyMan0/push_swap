/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 11:37:00 by anfouger          #+#    #+#             */
/*   Updated: 2025/11/28 01:12:59 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ra(t_stack **stack)
{
	if (!(*stack) || !(*stack)->top || (*stack)->size < 2)
		return ;
	(*stack)->top = (*stack)->top->next;
	write(1, "ra\n", 3);
}

void	rb(t_stack **stack)
{
	if (!(*stack) || !(*stack)->top || (*stack)->size < 2)
		return ;
	(*stack)->top = (*stack)->top->next;
	write(1, "rb\n", 3);
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	if (!(*stack_a) || !(*stack_a)->top || (*stack_a)->size < 2
		|| !(*stack_b) || !(*stack_b)->top || (*stack_b)->size < 2)
		return ;
	(*stack_a)->top = (*stack_a)->top->next;
	(*stack_b)->top = (*stack_b)->top->next;
	write(1, "rr\n", 3);
}
