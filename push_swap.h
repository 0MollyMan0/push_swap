/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 16:20:39 by anfouger          #+#    #+#             */
/*   Updated: 2025/11/25 10:58:12 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>


typedef struct	t_stack
{
	struct t_node	*top;
	int				size;
}					t_stack;

typedef struct	t_node
{
	struct t_node	*next;
	struct t_node	*prev;
	int				data;
}					t_node;

/*--------------Libft--------------*/
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(const char *s);
void	free_tab(char **s);
int		ft_atoi(char *str);
char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *s);

/*---------------Lst---------------*/
t_node	*ft_create_node(int	data);
int		ft_lstsize(t_node *lst);
t_node	*ft_lstlast(t_node *lst, int size);
void	ft_lstadd_front(t_node **lst, t_node *new);
void	ft_lstadd_back(t_node **lst, t_node *new, int size);

/*-------------Parsing-------------*/
int		ft_verif_num(char **split);
int		ft_verif_same(char **split);
char	**ft_parsing(int ac, char **av);

/*--------------Stack--------------*/
t_stack *ft_create_stack_a(char **split);
t_stack *ft_create_stack_b(int size);
void	ft_free_stack(t_stack **stack);

