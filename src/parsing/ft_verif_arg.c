/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 13:45:11 by anfouger          #+#    #+#             */
/*   Updated: 2025/12/09 14:27:24 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	ft_verif_arg(int ac, char **av)
{
	int	i;
	int	j;
	int	flag;

	i = 1;
	while (i < ac)
	{
		j = 0;
		flag = 0;
		while (av[i][j])
		{
			if (av[i][j] >= '0' && av[i][j] <= '9')
				flag = 1;
			j++;
		}
		if (!flag)
		{
			write(2, "Error\n", 6);
			return (0);
		}
		i++;
	}
	return (1);
}
