/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenibaud <jenibaud@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:44:12 by jenibaud          #+#    #+#             */
/*   Updated: 2025/04/18 13:25:20 by jenibaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

/*********************Includes**********************/

# include "srcs/Libft/libft.h"
# include "srcs/ft_printf/ft_printf.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include <limits.h>

/*********************Struct**********************/

typedef struct s_stack_node
{
	int					nbr;
	int					index;
	int					push_cost;
	bool				above_median;
	bool				cheapest;
	struct s_stack_node *target_node;	
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}	t_stack_node;

/*********************Mooves**********************/

void			current_index(t_stack_node *stack);
void			set_cheapest(t_stack_node *stack);
void			init_nodes_a(t_stack_node *a, t_stack_node *b);
void			init_nodes_b(t_stack_node *a, t_stack_node *b);
void			ra(t_stack_node **a, bool print);
void			rb(t_stack_node **b, bool print);
void			rr(t_stack_node **a, t_stack_node **b, bool print);
// static void		rotate_both(t_stack_node **a,
// 						t_stack_node **b,
// 						t_stack_node *cheapest_node);
void			prep_for_push(t_stack_node **stack,
							t_stack_node *top_node,
							char stack_name);
char			**split(char *s, char c);
void			init_stack_a(t_stack_node **a, char **argv);
void			sa(t_stack_node	**a, bool print);
void			sb(t_stack_node **b, bool print);
void			ss(t_stack_node **a, t_stack_node **b, bool print);
void			rra(t_stack_node **a, bool print);
void			rrb(t_stack_node **b, bool print);
void			rrr(t_stack_node **a, t_stack_node **b, bool print);
t_stack_node	*get_cheapest(t_stack_node *stack);

/*********************Utils**********************/

int				stack_len(t_stack_node *stack);
bool			stack_sorted(t_stack_node *stack);
t_stack_node	*find_min(t_stack_node *stack);
t_stack_node	*find_max(t_stack_node *stack);
t_stack_node	*find_last(t_stack_node *stack);

/*********************Algorythm**********************/

void			sort_stacks(t_stack_node **a, t_stack_node **b);
void			sort_three(t_stack_node **a);

/*********************Parsing**********************/

int				error_syntax(char *str_n);
int				error_duplicate(t_stack_node *a, int n);
void			free_stack(t_stack_node **stack);
void			free_errors(t_stack_node **a);

#endif
