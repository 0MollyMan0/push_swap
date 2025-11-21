/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 08:47:14 by anfouger          #+#    #+#             */
/*   Updated: 2025/11/21 09:23:24 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack *ft_parsing(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	
	if (verif_arg(ac, av))
		return (NULL);
	stack_a = malloc(sizeof(t_stack));
	if (!stack_a)
        return (NULL);
	ft_create_stack_a(ac, av, &stack_a);
	if (ft_is_same(stack_a))
	{
		free(stack_a);
		return (NULL);
	}
	stack_b = malloc(sizeof(t_stack));
	if (!stack_b)
        return (NULL);
	ft_create_stack_b(&stack_b, stack_a->size);
}