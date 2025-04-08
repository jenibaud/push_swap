/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenibaud <jenibaud@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:44:12 by jenibaud          #+#    #+#             */
/*   Updated: 2025/04/08 14:50:25 by jenibaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

/*********************Includes**********************/

# include "srcs/Libft/libft.h"
# include "srcs/ft_printf/ft_printf.h"
# include "srcs/gnl/get_next_line.h"
# include <unistd.h>
# include <stdlib.h>

/*********************Struct**********************/

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}					t_stack;

/*********************Mooves**********************/
int	sa(t_stack **stk);
int	sb(t_stack **stk);
int	ss(t_stack **stk);
int	pa(t_stack **a, t_stack **b);
int	pb(t_stack **a, t_stack **b);
int	ra(t_stack **stk);

#endif
