/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_indexation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 09:52:37 by anfouger          #+#    #+#             */
/*   Updated: 2025/11/21 09:57:40 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_indexation(t_stack **stack_a)
{
	t_node	*node_1;
	t_node	*node_2;
	int		index;
	
	node_1 = (*stack_a)->top;
	while (node_1)
	{
		node_2 = (*stack_a)->top;
		while (node_2)
		{
			if (node_1->data > node_2->data)
				index++;
			node_2 = node_2->next;
		}
		node_1->index = index;
		node_1 = node_1->next;
	}
}