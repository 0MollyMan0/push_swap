/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 09:57:57 by anfouger          #+#    #+#             */
/*   Updated: 2025/11/24 11:10:03 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	fill_new(char *s1, char *s2, char *new)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[j])
	{
		new[j] = s1[j];
		j++;
	}
	new[j] = ' ';
	j++;
	while (s2[i])
		new[j++] = s2[i++];
	new[j] = '\0';
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t			len_s2;
	size_t			len_s1;
	char			*new;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	new = malloc(sizeof(char) * (len_s2 + len_s1 + 1 + 1));
	if (!new)
		return (NULL);
	fill_new(s1, s2, new);
	return (new);
}
