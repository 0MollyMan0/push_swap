/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_same.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 09:10:30 by anfouger          #+#    #+#             */
/*   Updated: 2025/11/21 09:18:24 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_is_same(t_stack *stack_a)
{
	t_node	*test_1;
	t_node	*test_2;
	
	test_1 = stack_a->top;
	while (test_1)
	{
		test_2 = stack_a->top;
		while (test_2)
		{
			if (test_1->data == test_2->data && 
				test_1->index != test_2->index)
				return (1);
			test_2 = test_2->next;
		}
		test_1 = test_1->next;
	}
	return (0);
}