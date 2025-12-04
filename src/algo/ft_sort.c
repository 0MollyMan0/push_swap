/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:03:44 by anfouger          #+#    #+#             */
/*   Updated: 2025/12/04 09:30:16 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>
#include <stdio.h>

void	ft_sort(t_stack **stack_a, t_stack **stack_b)
{
	t_chunk	*chunks;
	
	// if ((*stack_a)->size < 5)
	// 	ft_sort_small(&(*stack_a), &(*stack_b), &chunks);
	// else
	// {
		chunks = ft_chunking((*stack_a)->size);
		ft_first_part(stack_a, stack_b, &chunks);
	// }
}

void	ft_first_part(t_stack **stack_a, t_stack **stack_b, t_chunk **chunks)
{
	t_node	*node;
	t_chunk *chunk;

	chunk = (*chunks);
	
	while ((*stack_a)->size != 0)
	{
		node = (*stack_a)->top;
		if (node->index >= chunk->start && node->index <= chunk->end)
		{
			pb(stack_a, stack_b);
			chunk->count++;
			if ((*stack_b)->size > 1 && (*stack_b)->top->index % 2 == 0)
				rb(stack_b);
		}
		else
			ra(&(*stack_a));
		if (chunk->count == chunk->size)
			chunk = chunk->next;
	}
}
