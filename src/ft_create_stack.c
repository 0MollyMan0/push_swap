/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 11:42:09 by anfouger          #+#    #+#             */
/*   Updated: 2025/11/20 07:37:18 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack ft_create_stack_a(int ac, char **av)
{
	t_stack *stack_a;
	int i;
	
	stack_a = malloc(sizeof(t_stack));
	if (!stack_a)
        return (NULL);
    stack_a->top = NULL;
    stack_a->size = 0;
	while (i++ < ac)
	{
		
	}
	 
	return (*stack_a);
}
