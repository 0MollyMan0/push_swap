/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_small.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:02:30 by anfouger          #+#    #+#             */
/*   Updated: 2025/12/09 10:41:10 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

static void	ft_sort_two(t_stack **stack_a)
{
	if ((*stack_a)->top->index == 1)
		sa(stack_a);
}

static void	ft_sort_three(t_stack **stack_a)
{
	if ((*stack_a)->top->index == 0 && (*stack_a)->top->next->index == 2)
	{
		rra(stack_a);
		sa(stack_a);
	}
	else if ((*stack_a)->top->index == 1 && (*stack_a)->top->next->index == 0)
		sa(stack_a);
	else if ((*stack_a)->top->index == 1 && (*stack_a)->top->next->index == 2)
		rra(stack_a);
	else if ((*stack_a)->top->index == 2 && (*stack_a)->top->next->index == 1)
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if ((*stack_a)->top->index == 2 && (*stack_a)->top->next->index == 0)
		ra(stack_a);
}

static void	ft_sort_four(t_stack **stack_a, t_stack **stack_b)
{
	ft_bring_top_a(stack_a, 3);
	pb(stack_a, stack_b);
	ft_sort_three(stack_a);
	pa(stack_a, stack_b);
	ra(stack_a);
}

static void	ft_sort_five(t_stack **stack_a, t_stack **stack_b)
{
	ft_bring_top_a(stack_a, 4);
	pb(stack_a, stack_b);
	ft_sort_four(stack_a, stack_b);
	pa(stack_a, stack_b);
	ra(stack_a);
}

void	ft_sort_small(t_stack **stack_a, t_stack **stack_b)
{
	if ((*stack_a)->size == 2)
		ft_sort_two(stack_a);
	if ((*stack_a)->size == 3)
		ft_sort_three(stack_a);
	if ((*stack_a)->size == 4)
		ft_sort_four(stack_a, stack_b);
	if ((*stack_a)->size == 5)
		ft_sort_five(stack_a, stack_b);
}
