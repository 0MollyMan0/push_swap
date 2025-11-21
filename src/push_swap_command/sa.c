/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 10:41:17 by anfouger          #+#    #+#             */
/*   Updated: 2025/11/21 10:55:47 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sa(t_stack **stack_a)
{
	t_node *tmp;
	t_node *node_1;
	t_node *node_2;

	node_1 = ft_create_node((*stack_a)->top->data, (*stack_a)->top->index);
	tmp = ft_create_node((*stack_a)->top->data, (*stack_a)->top->index);
}