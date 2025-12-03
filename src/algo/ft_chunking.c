/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chunking.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 08:20:37 by anfouger          #+#    #+#             */
/*   Updated: 2025/12/03 14:46:16 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_chunk	*ft_create_chunk(int start, int end, int chunk_size)
{
	t_chunk	*new_chunk;

	new_chunk = malloc(sizeof(t_chunk));
	if (!new_chunk)
		return (NULL);
	new_chunk->next = NULL;
	new_chunk->start = start;
	new_chunk->end = end;
	new_chunk->size = chunk_size;
	new_chunk->count = 0;
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
		return ;
	}
	last = (*lst);
	while (last->next)
		last = last->next;
	last->next = new;
}

t_chunk		*ft_chunking(int size)
{
	int		chunk_size;
	int		i;
	t_chunk	*chunk;
	t_chunk *tmp;
	
	chunk_size = (int)sqrt((double)size) + 1;
	chunk = NULL;
	i  = 0;
	while (i + chunk_size <= size)
	{
		tmp = ft_create_chunk(i, i + chunk_size - 1, chunk_size);
		ft_chunk_add_back(&chunk, tmp);
		i += chunk_size;
	}
	if (size % chunk_size == 0)
		return (chunk);
	tmp = ft_create_chunk(i, size - 1, size % chunk_size);
	ft_chunk_add_back(&chunk, tmp);
	return (chunk);
}
