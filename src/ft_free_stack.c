/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 07:34:48 by anfouger          #+#    #+#             */
/*   Updated: 2025/11/25 13:36:28 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_free_stack(t_stack **stack)
{
	t_node	*tmp;
	t_node	*node;
	int		i;

	i = 1;
	node = (*stack)->top;
	while (i < (*stack)->size)
	{
		tmp = node->next;
		node->prev = NULL;
		node->next = NULL;
		free(node);
		node = tmp;
		i++;
	}
	free((*stack));	
}
