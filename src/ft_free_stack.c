/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 07:34:48 by anfouger          #+#    #+#             */
/*   Updated: 2025/11/25 10:57:56 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_free_stack(t_stack **stack)
{
	t_node	*tmp;
	t_node	*node;

	node = (*stack)->top;
	while (node)
	{
		tmp = node->next;
		node->prev = NULL;
		node->next = NULL;
		free(node);
		node = tmp;
	}
	free((*stack));	
}
