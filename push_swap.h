/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 16:20:39 by anfouger          #+#    #+#             */
/*   Updated: 2025/11/21 09:15:38 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>


typedef struct	t_stack
{
	struct t_node	*top;
	void			*size;
}					t_stack;

typedef struct	t_node
{
	struct t_node	*next;
	struct t_node	*prev;
	int				data;
	void			*index;
}					t_node;

int		verif_arg(int ac, char **av);
void	free_tab(char **s);
char	**ft_split(char const *s, char c);
int		ft_lstsize(t_node *lst);
t_node	*ft_lstlast(t_node *lst);
void	ft_lstdelone(t_node *lst, void (*del)(void*));
void	ft_lstadd_front(t_node **lst, t_node *new);
void	ft_lstadd_back(t_node **lst, t_node *new);
t_stack	*ft_create_stack_a(int ac, char **av, t_stack **stack_a);
void	ft_create_stack_b(t_stack **stack_b, int size);
t_node	*ft_create_node(int	data, int size);
t_stack	*ft_parsing(int ac, char **av);