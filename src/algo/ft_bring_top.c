/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bring_top.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 10:23:48 by anfouger          #+#    #+#             */
/*   Updated: 2025/12/09 14:39:57 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_bring_top_b(t_stack **stack, int index)
{
	t_node	*node;
	int		count;

	count = 0;
	node = (*stack)->top;
	while (node->index != index)
	{
		count++;
		node = node->next;
	}
	if (count > (*stack)->size / 2)
	{
		while ((*stack)->top->index != index)
			rrb(stack);
	}
	else
	{
		while ((*stack)->top->index != index)
			rb(stack);
	}
}

void	ft_bring_top_a(t_stack **stack, int index)
{
	t_node	*node;
	int		count;

	count = 0;
	node = (*stack)->top;
	while (node->index != index)
	{
		count++;
		node = node->next;
	}
	if (count > (*stack)->size / 2)
	{
		while ((*stack)->top->index != index)
			rra(stack);
	}
	else
	{
		while ((*stack)->top->index != index)
			ra(stack);
	}
}

static int	ft_calc_rra(t_stack **stack_a, int start, int end)
{
	t_node	*node;
	int		count;

	node = (*stack_a)->top->prev;
	count = 0;
	while (!(node->index >= start && node->index <= end))
	{
		node = node->prev;
		count++;
	}
	return (count);
}

static int	ft_calc_ra(t_stack **stack_a, int start, int end)
{
	t_node	*node;
	int		count;

	node = (*stack_a)->top;
	count = 0;
	while (!(node->index >= start && node->index <= end))
	{
		node = node->next;
		count++;
	}
	return (count);
}

void	ft_bring_chunk_top(t_stack **stack_a, int start, int end)
{
	int		count_rra;
	int		count_ra;

	count_rra = ft_calc_rra(stack_a, start, end);
	count_ra = ft_calc_ra(stack_a, start, end);
	if (count_ra > count_rra)
	{
		while (!((*stack_a)->top->index >= start
				&& (*stack_a)->top->index <= end))
			rra(stack_a);
	}
	else
	{
		while (!((*stack_a)->top->index >= start
				&& (*stack_a)->top->index <= end))
			ra(stack_a);
	}
}
