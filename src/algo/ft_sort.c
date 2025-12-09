/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:03:44 by anfouger          #+#    #+#             */
/*   Updated: 2025/12/09 10:20:58 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>
#include <stdio.h>

int    get_max_index(t_stack *stack)
{
    int		max;
	int		i;
	t_node	*node;

	i = 0;
    if (!stack)
        return (0);
    max = stack->top->index;
	node = stack->top;
    while (stack->size != i)
    {
        if (node->index > max)
            max = node->index;
        node = node->next;
		i++;
    }
    return (max);
}

void	ft_sort(t_stack **stack_a, t_stack **stack_b)
{
	t_chunk	*chunks;
	int		count;
	
	// if (ft_is_sorted((*stack_a)))
	// 	return ;
	if ((*stack_a)->size <= 5)
	{
		ft_sort_small(stack_a, stack_b);
		return ;
	}
	else
	{
		chunks = ft_chunking((*stack_a)->size);
		ft_first_part(stack_a, stack_b, &chunks);
	}
	while ((*stack_b)->size != 0)
	{
		count = get_max_index((*stack_b));
		ft_bring_top(stack_b, count);
		pa(stack_a, stack_b);
	}
}

// void	ft_first_part(t_stack **stack_a, t_stack **stack_b, t_chunk **chunks)
// {
// 	t_node	*node;
// 	t_chunk *chunk;

// 	chunk = (*chunks);
	
// 	while ((*stack_a)->size != 0)
// 	{
// 		node = (*stack_a)->top;
// 		ft_bring_chunk_top(stack_a, chunk->start, chunk->end);
// 		pb(stack_a, stack_b);
// 		chunk->count++;
// 		if ((*stack_b)->size > 1 && (*stack_b)->top->index % 2 == 0)
// 			rb(stack_b);
// 		if (chunk->count == chunk->size)
// 			chunk = chunk->next;
// 	}
// }

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
