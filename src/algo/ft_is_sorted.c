/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 15:29:39 by anfouger          #+#    #+#             */
/*   Updated: 2025/12/08 15:37:07 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	ft_is_sorted(t_stack	*stack)
{
	t_node	*tmp;
	int		i;
	
	tmp = stack->top->next;
	i = 0;
	while (i < stack->size)
	{
		if (tmp->index != i)
			return (0);
		tmp = tmp->next;
		i++;
	}
	return (1);
}