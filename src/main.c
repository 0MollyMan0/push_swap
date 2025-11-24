/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 09:25:37 by anfouger          #+#    #+#             */
/*   Updated: 2025/11/24 10:29:28 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../push_swap.h"

int main(int ac, char **av)
{
	int i;
	char *join;
	char **split;

	i = 0;
	join = NULL;
	while (i++ < ac)
		join = ft_strjoin(join, av[i]);
	printf("join = %s\n", join);
	split = ft_split(join, ' ');
	free(join);
	i = -1;
	while (split[i++])
		printf("split %d = %s\n", i, split[i]);
	if (!ft_verif_num(split))
		printf("%s", "WRONG ARGUMENT");
	if (!ft_verif_same(split))
		printf("%s", "SAME NUMBER DETECTED");
	return 0;
}
