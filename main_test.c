/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 13:40:55 by anfouger          #+#    #+#             */
/*   Updated: 2025/12/08 13:41:40 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <push_swap.h>

static void	print_stack_data(t_stack	*stack)
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
static void	print_stack_index(t_stack	*stack)
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
		printf("index = %d\n", tmp->index);
		tmp = tmp->next;
		i++;
	}
}

int main(int ac, char **av)
{
	char	**split;
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_chunk *chunk;
	int 	i;

	printf("%s", "\n/*----------Debut de ce test-----------*/\n");
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
	print_stack_data(stack_a);
	printf("\n%s\n", "Stack_b:");
	print_stack_data(stack_b);

	printf("%s", "\n/*----Test Indexation A----*/\n\n");
	ft_indexation(stack_a);
	printf("\n%s\n", "Stack_a:");
	print_stack_index(stack_a);
	printf("\n%s\n", "Stack_b:");
	print_stack_index(stack_b);

	printf("%s", "\n/*----Test Chunking----*/\n\n");
	chunk = ft_chunking(stack_a->size);
	t_chunk *tmp = chunk;
	while (tmp)
	{
		printf("chunk start = %d  chunk end = %d  chunk size = %d\n", tmp->start, tmp->end, tmp->size);
		tmp = tmp->next;
	}
	
	printf("%s", "\n/*----Test 3 Push A vers B----*/\n\n");
	pb(&stack_a, &stack_b);
	pb(&stack_a, &stack_b);
	pb(&stack_a, &stack_b);
	printf("\n%s\n", "Stack_a:");
	print_stack_data(stack_a);
	printf("\n%s\n", "Stack_b:");
	print_stack_data(stack_b);
	
	printf("%s", "\n/*----Test sort----*/\n\n");
	ft_sort(&stack_a, &stack_b);
	printf("\n%s\n", "Stack_a:");
	print_stack_index(stack_a);
	printf("\n%s\n", "Stack_b:");
	print_stack_index(stack_b);
	
	printf("%s", "\n/*----------Fin de ce test-----------*/\n\n");
	ft_free_chunk(chunk);
	ft_free_stack(stack_a);
	ft_free_stack(stack_b);
	
	return (0);
}