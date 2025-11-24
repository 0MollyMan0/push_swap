/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 09:25:37 by anfouger          #+#    #+#             */
/*   Updated: 2025/11/24 11:15:54 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../push_swap.h"

int main(int ac, char **av)
{
	int i;
	char **split;

	i = 0;
	split = ft_parsing(ac, av);
	if (!split)
	{
		printf("%s", "split = null");
		return 0;
	}
	while (split[i] && split)
	{
		printf("split %d = %s\n", i, split[i]);
		i++;
	}
	return (0);
}