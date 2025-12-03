/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 09:25:37 by anfouger          #+#    #+#             */
/*   Updated: 2025/12/03 07:20:35 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <push_swap.h>

static void	print_stack(t_stack	*stack)
{
	t_node	*tmp;
	int		i;
	
	if (!stack)
	{
		printf("%s", "stack est NULL");
		return ;
	}
	if (!stack->top)
	{
		printf("%s", "rien dans cette stack\n");
		return ;
	}
	tmp = stack->top;
	i = 0;
	while (i < stack->size)
	{
		printf("data = %d\n", tmp->data);
		tmp = tmp->next;
		i++;
	}
}

int main(int ac, char **av)
{
	char	**split;
	t_stack	*stack_a;
	t_stack	*stack_b;
	int 	i;

	printf("%s", "/*----------Debut de ce test-----------*/\n");
	split = ft_parsing(ac, av);
	if (!split)
		return (0);
	i = 0;
	while (split[i] && split)
	{
		printf("split %d = %s\n", i, split[i]);
		i++;
	}
	stack_a = ft_create_stack_a(split);
	free_tab(split);
	stack_b = ft_create_stack_b();
	printf("\n%s\n", "Stack_a:");
	print_stack(stack_a);
	printf("\n%s\n", "Stack_b:");
	print_stack(stack_b);

	printf("%s", "/*----Test Indexation A----*/\n\n");
	ft_indexation(&stack_a);
	printf("\n%s\n", "Stack_a:");
	print_stack(stack_a);
	printf("\n%s\n", "Stack_b:");
	print_stack(stack_b);
	
	printf("%s", "/*----Test 3 Push A vers B----*/\n\n");
	pb(&stack_a, &stack_b);
	pb(&stack_a, &stack_b);
	pb(&stack_a, &stack_b);
	printf("\n%s\n", "Stack_a:");
	print_stack(stack_a);
	printf("\n%s\n", "Stack_b:");
	print_stack(stack_b);
	
	printf("%s", "/*----Test Rotate A----*/\n\n");
	ra(&stack_a);
	printf("\n%s\n", "Stack_a:");
	print_stack(stack_a);
	printf("\n%s\n", "Stack_b:");
	print_stack(stack_b);
	
	printf("%s", "/*----Test Reverse Rotate B----*/\n\n");
	rrb(&stack_b);
	printf("\n%s\n", "Stack_a:");
	print_stack(stack_a);
	printf("\n%s\n", "Stack_b:");
	print_stack(stack_b);

	printf("%s", "/*----Test Double swap----*/\n\n");
	ss(&stack_a, &stack_b);
	printf("\n%s\n", "Stack_a:");
	print_stack(stack_a);
	printf("\n%s\n", "Stack_b:");
	print_stack(stack_b);
	
	printf("%s", "/*----------Fin de ce test-----------*/\n\n");
	ft_free_stack(&stack_a);
	ft_free_stack(&stack_b);
	return (0);
}
