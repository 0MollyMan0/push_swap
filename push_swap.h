/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 16:20:39 by anfouger          #+#    #+#             */
/*   Updated: 2025/11/24 09:40:58 by anfouger         ###   ########.fr       */
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

// Libft
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s);
void	free_tab(char **s);
int		ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *s);

// Lst
int		ft_lstsize(t_node *lst);
t_node	*ft_lstlast(t_node *lst);
void	ft_lstdelone(t_node *lst, void (*del)(void*));
void	ft_lstadd_front(t_node **lst, t_node *new);
void	ft_lstadd_back(t_node **lst, t_node *new);

// Push Swap
int		verif_arg(int ac, char **av);
t_stack	*ft_create_stack_a(int ac, char **av, t_stack **stack_a);
void	ft_create_stack_b(t_stack **stack_b, int size);
t_node	*ft_create_node(int	data, int index);
int		ft_parsing(int ac, char **av, t_stack **stack_a, t_stack **stack_b);
