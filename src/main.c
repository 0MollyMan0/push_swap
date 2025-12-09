/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 09:25:37 by anfouger          #+#    #+#             */
/*   Updated: 2025/12/09 14:25:21 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	main(int ac, char **av)
{
	char	**split;
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		i;

	i = 0;
	if (ac < 2)
		return (0);
	split = ft_parsing(ac, av);
	if (!split)
		return (0);
	stack_a = ft_create_stack_a(split);
	free_tab(split);
	stack_b = ft_create_stack_b();
	ft_indexation(stack_a);
	ft_sort(&stack_a, &stack_b);
	ft_free_stack(stack_a);
	ft_free_stack(stack_b);
	return (0);
}
