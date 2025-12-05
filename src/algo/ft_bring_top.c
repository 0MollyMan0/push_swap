/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bring_top.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 10:23:48 by anfouger          #+#    #+#             */
/*   Updated: 2025/12/05 10:35:42 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_bring_top(t_stack **stack, int index)
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
