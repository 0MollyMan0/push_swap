/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 11:50:35 by anfouger          #+#    #+#             */
/*   Updated: 2025/11/26 09:21:40 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_node	*ft_lstlast(t_node *lst, int size)
{
	int i;

	i = 1;
	if (!lst)
		return (NULL);
	while (i++ < size)
		lst = lst->next;
	return (lst);
}
