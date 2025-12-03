/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_indexation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 07:02:46 by anfouger          #+#    #+#             */
/*   Updated: 2025/12/03 11:31:52 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_indexation(t_stack *stack_a)
{
	t_node	*node;
	t_node	*tmp;
	int		i;
	int		j;
	int		count;

	i = 0;
	node = stack_a->top;
	while (i < stack_a->size)
	{
		j = 0;
		count = 0;
		tmp = stack_a->top;
		while (j < stack_a->size)
		{
			if (node->data > tmp->data)
				count++;
			tmp = tmp->next;
			j++;
		}
		node->index = count;
		node = node->next;
		i++;
	}
}
