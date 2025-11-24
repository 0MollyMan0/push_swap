/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_same.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 10:22:00 by anfouger          #+#    #+#             */
/*   Updated: 2025/11/24 10:28:19 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int ft_verif_same(char **split)
{
	int i;
	int j;

	i = 1;
	while (split[i])
	{
		j = 0;
		while (split[j])
		{
			if (ft_atoi(split[i]) == ft_atoi(split[j]) && i != j)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}