/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_max.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 11:35:01 by anfouger          #+#    #+#             */
/*   Updated: 2025/11/26 11:42:40 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

static int	in_int_range(char *s)
{
	long long n = 0;
	int sign = 1;

	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	while (*s)
	{
		n = n * 10 + (*s - '0');
		if (sign == 1 && n > INT_MAX)
			return (0);
		if (sign == -1 && -n < INT_MIN)
			return (0);
		s++;
	}
	return (1);
}

int	ft_verif_max(char **tab)
{
	int i = 0;
	while (tab[i])
	{
		if (!in_int_range(tab[i]))
			return 0;
		i++;
	}
	return 1;
}
