/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 13:10:03 by anfouger          #+#    #+#             */
/*   Updated: 2025/11/15 15:09:19 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int verif_arg(int ac, char **av)
{
	int i;
	int j;
	
	if (ac < 2)
		return (0);
	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] != ' ' && 
				!(av[i][j] >= '0' && av[i][j] <= '9') && 
				av[i][j] != '-')
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

#include <stdio.h>

int main(int ac, char **av)
{
	if (verif_arg(ac, av) == 1)
		printf("%s", "Arguments valides");
	else
		printf("%s", "Arguments invalides");
	return 0;
}
