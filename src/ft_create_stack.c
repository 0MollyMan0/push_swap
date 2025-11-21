/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 11:42:09 by anfouger          #+#    #+#             */
/*   Updated: 2025/11/21 09:15:01 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
// #include <stdio.h>

void ft_create_stack_a(int ac, char **av, t_stack **stack_a)
{
	t_node	*new_node;
	char **s_arg;
	int		i;
	int		j;
	
    (*stack_a)->top = NULL;
    (*stack_a)->size = 0;
    i = 1;
	while (i < ac)
	{
		s_arg = ft_split(av[i], ' ');
		j = 0;
		while (s_arg[j])
		{
			new_node = ft_create_node(ft_atoi(s_arg[j]), (*stack_a)->size);
			ft_lstadd_back(&(*stack_a)->top, new_node);
			(*stack_a)->size++;
			j++;
		}
		i++;
	}
}

void ft_create_stack_b(t_stack **stack_b, int size)
{
	t_node	*new_node;
	char **s_arg;
	int		i;
	
    (*stack_b)->top = NULL;
    (*stack_b)->size = 0;
    i = 1;
	while (i < size)
	{
		new_node = ft_create_node(0, size);
		ft_lstadd_back(&(*stack_b)->top, new_node);
		(*stack_b)->size++;
		i++;
	}
}

// int main (int ac, char **av)
// {
// 	t_stack *test;
// 	test = ft_create_stack_a(ac, av);
// 	return 0;
// }

/* Put that at the end of ft_create_stack_a to see the result
	t_node *tmp = stack_a->top;
	while (tmp)
	{
		printf("%d ", tmp->data);
		tmp = tmp->next;
	}
*/
