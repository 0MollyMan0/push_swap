/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_small.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:02:30 by anfouger          #+#    #+#             */
/*   Updated: 2025/12/03 15:04:57 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void    ft_sort_small(t_stack *stack_a)
{
	if (stack_a->size == 2)
		ft_sort_two();
	if (stack_a->size == 3)
		ft_sort_three();
	if (stack_a->size == 4)
		ft_sort_four();
	if (stack_a->size == 5)
		ft_sort_five();
}
