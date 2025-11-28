/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 11:36:17 by anfouger          #+#    #+#             */
/*   Updated: 2025/11/28 01:07:25 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	sa(t_stack **stack)
{
	int	tmp;

	if (!(*stack) || !(*stack)->top || (*stack)->size < 2)
		return ;
	tmp = (*stack)->top->data;
	(*stack)->top->data = (*stack)->top->next->data;
	(*stack)->top->next->data = tmp;
	write(1, "sa\n", 3);
}

void	sb(t_stack **stack)
{
	int	tmp;

	if (!(*stack) || !(*stack)->top || (*stack)->size < 2)
		return ;
	tmp = (*stack)->top->data;
	(*stack)->top->data = (*stack)->top->next->data;
	(*stack)->top->next->data = tmp;
	write(1, "sb\n", 3);
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	int	tmp;

	if (!(*stack_a) || !(*stack_a)->top || (*stack_a)->size < 2
		|| !(*stack_b) || !(*stack_b)->top || (*stack_b)->size < 2)
		return ;
	tmp = (*stack_a)->top->data;
	(*stack_a)->top->data = (*stack_a)->top->next->data;
	(*stack_a)->top->next->data = tmp;
	tmp = (*stack_b)->top->data;
	(*stack_b)->top->data = (*stack_b)->top->next->data;
	(*stack_b)->top->next->data = tmp;
	write(1, "ss\n", 3);
}
