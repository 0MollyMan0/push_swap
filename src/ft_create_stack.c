/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 11:42:09 by anfouger          #+#    #+#             */
/*   Updated: 2025/11/24 12:23:43 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack *ft_create_stack_a(char **split)
{
	t_stack *stack_a;
	t_node *node;
	int i;

	i = 0;
	stack_a = malloc(sizeof(stack_a));
	while (split[i])
	{
		stack_a->size++;
		node = ft_create_node(ft_atoi(split[i]), stack_a->size - 1);
		ft_lstadd_back(&stack_a->top, node);
		i++;
	}
	
}


t_stack *ft_create_stack_a(int size)
{
	
    
}

