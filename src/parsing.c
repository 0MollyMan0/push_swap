/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 08:47:14 by anfouger          #+#    #+#             */
/*   Updated: 2025/11/20 12:18:07 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack *ft_parsing(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_node	*test_1;
	t_node	*test_2;
	
	if (verif_arg(ac, av))
		return (NULL);
	stack_a = malloc(sizeof(t_stack));
	if (!stack_a)
        return (NULL);
	test_1 = stack_a->top;
	while (test_1)
	{
		test_2 = stack_a->top;
		while (test_2)
		{
			if (test_1->data == test_2->data && 
				test_1->index != test_2->index)
				return (NULL);
			test_2 = test_2->next;
		}
		test_1 = test_1->next;
	}
	stack_b = malloc(sizeof(t_stack));
	if (!stack_b)
        return (NULL);
}