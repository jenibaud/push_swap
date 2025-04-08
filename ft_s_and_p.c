/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s_and_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenibaud <jenibaud@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:34:18 by jenibaud          #+#    #+#             */
/*   Updated: 2025/04/08 14:43:30 by jenibaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sa(t_stack **stk)
{
	t_stack	*temp;

	if (*stk && ((*stk)->next != NULL))
	{
		temp = *stk;
		*stk = (*stk)->next;
		temp->next = (*stk)->next;
		(*stk)->next = temp;
	}
	return (0);
}

int	sb(t_stack **stk)
{
	t_stack	*temp;

	if (*stk && ((*stk)->next != NULL))
	{
		temp = *stk;
		*stk = (*stk)->next;
		temp->next = (*stk)->next;
		(*stk)->next = temp;
	}
	return (0);
}

int	ss(t_stack **stk)
{
	//sa et sb en mm temps mais pas besoin de creer func 
	//puisqu'il suffit d'appeller les deux
}

int	pa(t_stack **a, t_stack **b)
{
	t_stack *temp;

	if (!b || !*b)
		return (0);
	if (!*a)
	{
		*a = *b;
		*b = (*b)->next;
		(*a)->next = NULL;
	}
	else
	{
		temp = (*b)->next;
		ft_lstadd_front(a, *b);
		*b = temp;
	}
	if (*a == NULL)
	{
		free(a);
		return (0);
	}
	ft_printf("pa\n");
	return (1);
}

int	pb(t_stack **a, t_stack **b)
{
	t_stack *temp;

	if (!a || !*a)
		return (0);
	if (!*b)
	{
		*b = *a;
		*a = (*a)->next;
		(*b)->next = NULL;
	}
	else
	{
		temp = (*a)->next;
		ft_lstadd_front(b, *a);
		*a = temp;
	}
	if (*b == NULL)
	{
		free(b);
		return (0);
	}
	ft_printf("pb\n");
	return (1);
}
