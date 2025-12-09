/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 16:20:39 by anfouger          #+#    #+#             */
/*   Updated: 2025/12/09 14:24:54 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <math.h>

typedef struct t_stack
{
	struct t_node	*top;
	int				size;
}					t_stack;

typedef struct t_node
{
	struct t_node	*next;
	struct t_node	*prev;
	int				data;
	int				index;
}					t_node;

typedef struct t_chunk
{
	struct t_chunk	*next;
	int				start;
	int				end;
	int				size;
	int				count;				
}					t_chunk;

/*--------------Libft--------------*/
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(const char *s);
void	free_tab(char **s);
int		ft_atoi(char *str);
char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *s);

/*---------------Lst---------------*/
t_node	*ft_create_node(int data);
int		ft_lstsize(t_node *lst);
t_node	*ft_lstlast(t_node *lst, int size);
void	ft_lstadd_front(t_node **lst, t_node *new);
void	ft_lstadd_back(t_node **lst, t_node *new, int size);

/*-------------Parsing-------------*/
int		ft_verif_arg(int ac, char **av);
int		ft_verif_num(char **split);
int		ft_verif_same(char **split);
int		ft_verif_max(char **spit);
char	**ft_parsing(int ac, char **av);

/*--------------Stack--------------*/
t_stack	*ft_create_stack_a(char **split);
t_stack	*ft_create_stack_b(void);
void	ft_free_stack(t_stack *stack);
void	ft_stack_add_front(t_stack **stack, t_node *new);

/*--------------Push---------------*/
void	ra(t_stack **stack);
void	rb(t_stack **stack);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **stack);
void	rrb(t_stack **stack);
void	rrr(t_stack **stack_a, t_stack **stack_b);
void	sa(t_stack **stack);
void	sb(t_stack **stack);
void	ss(t_stack **stack_a, t_stack **stack_b);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_a, t_stack **stack_b);

/*--------------Algo---------------*/
int		ft_is_sorted(t_stack	*stack);
void	ft_bring_top_a(t_stack **stack, int index);
void	ft_bring_top_b(t_stack **stack, int index);
void	ft_bring_chunk_top(t_stack **stack_a, int start, int end);
void	ft_sort_small(t_stack **stack_a, t_stack **stack_b);
void	ft_indexation(t_stack *stack_a);
t_chunk	*ft_chunking(int size);
void	ft_free_chunk(t_chunk *chunk);
void	ft_sort(t_stack **stack_a, t_stack **stack_b);
void	ft_to_a(t_stack **stack_a, t_stack **stack_b);
void	ft_to_b(t_stack **stack_a, t_stack **stack_b, t_chunk **chunks);