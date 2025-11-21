/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 09:36:27 by anfouger          #+#    #+#             */
/*   Updated: 2025/11/21 09:45:01 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push_swap(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	
	stack_a = malloc(sizeof(t_stack));
	if (!stack_a)
        return (NULL);
	stack_b = malloc(sizeof(t_stack));
	if (!stack_b)
        return (NULL);
	ft_parsing(ac, av, &stack_a, &stack_a);
}