/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 09:25:37 by anfouger          #+#    #+#             */
/*   Updated: 2025/11/25 13:38:01 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../push_swap.h"

int main(int ac, char **av)
{
	int i;
	char **split;
	t_stack *stack_a;
	t_stack *stack_b;
	t_node	*tmp;
	t_node	*tmp2;

	i = 0;
	split = ft_parsing(ac, av);
	if (!split)
		return (0);
	while (split[i] && split)
	{
		printf("split %d = %s\n", i, split[i]);
		i++;
	}
	stack_a = ft_create_stack_a(split);
	free_tab(split);
	stack_b = ft_create_stack_b(stack_a->size);
	if (!stack_a)
	{
		printf("%s", "stack_a est NULL");
		return (0);
	}
	if (!stack_b)
	{
		printf("%s", "stack_a est NULL");
		return (0);
	}
	tmp = stack_a->top;
	tmp2 = stack_b->top;
	i = 0;
	printf("\n%s\n", "Stack_a:   Stack_b: ");
	while (i < stack_a->size)
	{
		printf("data = %d   data = %d\n", tmp->data, tmp2->data);
		tmp = tmp->next;
		i++;
	}
	printf("data dernier = %d", stack_a->top->next->data);
	r(&stack_a);
	tmp = stack_a->top;
	tmp2 = stack_b->top;
	i = 0;
	printf("\n%s\n", "Stack_a:   Stack_b: ");
	while (i < stack_a->size)
	{
		printf("data = %d   data = %d\n", tmp->data, tmp2->data);
		tmp = tmp->next;
		i++;
	}
	ft_free_stack(&stack_a);
	ft_free_stack(&stack_b);
	return (0);
}
