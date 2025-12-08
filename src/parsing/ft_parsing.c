/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 08:47:14 by anfouger          #+#    #+#             */
/*   Updated: 2025/12/08 15:16:25 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

char	**ft_parsing(int ac, char **av)
{
	int		i;
	char	*join;
	char	*tmp;
	char	**split;

	i = 1;
	join = ft_strjoin("", av[i]);
	if (!ft_verif_arg(ac, av))
		return (NULL);
	while (i++ < ac - 1)
	{
		tmp = ft_strjoin(join, av[i]);
		free(join);
		join = tmp;
	}
	split = ft_split(join, ' ');
	free(join);
	if (!ft_verif_num(split) || !ft_verif_same(split) || !ft_verif_max(split)
		|| !split)
	{
		free_tab(split);
		write(2, "Error\n", 6);
		return (NULL);
	}
	return (split);
}
