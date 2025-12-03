/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chunking.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 08:20:37 by anfouger          #+#    #+#             */
/*   Updated: 2025/12/03 08:43:37 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_chunk	ft_create_chunk(int start, int end)
{
	t_chunk	*new_chunk;

	new_chunk = malloc(sizeof(t_chunk));
	if (!new_chunk)
		return (NULL);
	new_chunk->next = NULL;
	new_chunk->start = start;
	new_chunk->end = end;
	return (new_chunk);
}

static void	ft_chunk_add_back(t_chunk **lst, t_chunk *new)
{
	t_chunk	*last;

	if (!lst || !new)
		return ;
	if (!(*lst))
	{
		(*lst) = new;
		new->next = new;
		return ;
	}
	last = (*lst);
	while (last)
		last = last->next;
	last->next = new;
}

t_chunk		ft_chunking(int size)
{
	int i;
	
	i  = 0;
	if (size % 10 == 0)
	{
		while (i < size)
		{
			ft_create_chunk(i, i + 10);
			ft_chunk_add_back();
			i += 10;
		}
	}
	else
	{
		while (i + 10 < size)
		{
			ft_create_chunk(i, i + 10);
			ft_chunk_add_back();
			i += 10;
		}
		ft_create_chunk(i, size % 10);
		ft_chunk_add_back();
	}
}
