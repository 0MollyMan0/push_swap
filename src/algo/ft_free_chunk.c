/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_chunk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 11:34:48 by anfouger          #+#    #+#             */
/*   Updated: 2025/12/09 14:27:39 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_free_chunk(t_chunk *chunk)
{
	t_chunk	*next;

	while (chunk->next)
	{
		next = chunk->next;
		chunk->next = NULL;
		free(chunk);
		chunk = next;
	}
	free(chunk);
}
