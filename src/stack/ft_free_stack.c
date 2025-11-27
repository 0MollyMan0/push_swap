/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 07:34:48 by anfouger          #+#    #+#             */
/*   Updated: 2025/11/26 11:27:53 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_free_stack(t_stack **stack)
{
	t_node	*next;
	t_node	*node;
	int		i;

	i = 0;
	node = (*stack)->top;
	while (i < (*stack)->size)
	{
		next = node->next;
		node->prev = NULL;
		node->next = NULL;
		free(node);
		node = next;
		i++;
	}
	free((*stack));	
}
