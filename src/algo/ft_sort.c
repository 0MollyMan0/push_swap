/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:03:44 by anfouger          #+#    #+#             */
/*   Updated: 2025/12/03 16:04:29 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>


void	ft_sort(t_stack **stack_a, t_stack **stack_b)
{
	t_chunk	*chunks;
	if ((*stack_a)->size < 5)
		ft_sort_small(&(*stack_a), &(*stack_b), &chunks);
}

void	ft_first_part(t_stack **stack_a, t_stack **stack_b, t_chunk **chunks)
{
	t_node	*tmp;
	t_node	*node;

	node = (*stack_a)->top;
	while ((*stack_a)->size != 0)
	{
		if (node->index >= (*chunks)->start && node->index <= (*chunks)->end)
		{
			/* code */
		}
		
	}
	
}
