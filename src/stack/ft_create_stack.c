/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 11:42:09 by anfouger          #+#    #+#             */
/*   Updated: 2025/11/28 01:02:23 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_stack	*ft_create_stack_a(char **split)
{
	t_stack	*stack_a;
	t_node	*node;
	int		i;

	i = 0;
	stack_a = malloc(sizeof(t_stack));
	stack_a->top = NULL;
	while (split[i])
	{
		node = ft_create_node(ft_atoi(split[i]));
		if (!node)
		{
			ft_free_stack(&stack_a);
			return (NULL);
		}
		ft_lstadd_back(&stack_a->top, node, stack_a->size);
		i++;
		stack_a->size = i;
	}
	return (stack_a);
}

t_stack	*ft_create_stack_b(void)
{
	t_stack	*stack_b;

	stack_b = malloc(sizeof(t_stack));
	stack_b->top = NULL;
	stack_b->size = 0;
	return (stack_b);
}
