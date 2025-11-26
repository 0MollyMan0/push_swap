/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 13:10:03 by anfouger          #+#    #+#             */
/*   Updated: 2025/11/26 09:21:29 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int ft_verif_num(char **split)
{
	int i;
	int j;

	i = 0;
	if (!split)
		return (0);
	while (split[i])
	{
		j = 0;
		while (split[i][j])
		{
			if (!(split[i][j] >= '0' && split[i][j] <= '9') &&
				!(split[i][j] == '-' && j == 0))
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}
