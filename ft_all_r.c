/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_all_r.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenibaud <jenibaud@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:44:17 by jenibaud          #+#    #+#             */
/*   Updated: 2025/04/09 13:44:10 by jenibaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ra(t_stack **stk)
{
	t_stack	*temp;

	if (*stk && (*stk)->next)
	{
		temp = *stk;
		while (temp->next)
			temp = temp->next;
		temp->next = *stk;
		*stk = (*stk)->next;
		temp->next->next = NULL;
		write(1, "ra\n", 3);
		return (1);
	}
	return (0);
}

int	rb(t_stack **stk)
{
	t_stack	*temp;

	if (*stk && (*stk)->next)
	{
		temp = *stk;
		while (temp->next)
			temp = temp->next;
		temp->next = *stk;
		*stk = (*stk)->next;
		temp->next->next = NULL;
		write(1, "rb\n", 3);
		return (1);
	}
	return (0);
}

int	rra(t_stack **stk, int *index)
{
	t_stack	*temp;

	if (*stk && (*stk)->next)
	{
		temp = *stk;
		while (temp->next->next)
			temp = temp->next;
		temp->next->next = *stk;
		*stk = temp->next;
		temp->next = NULL;
		write(1, "rra\n", 4);
		if (index && *index)
			*index = *index + 1;
		return (1);
	}
	return (0);
}

int	rrb(t_stack **stk, int *index)
{
	t_stack	*temp;

	if (*stk && (*stk)->next)
	{
		temp = *stk;
		while (temp->next->next)
			temp = temp->next;
		temp->next->next = *stk;
		*stk = temp->next;
		temp->next = NULL;
		write(1, "rrb\n", 4);
		if (index && *index)
			*index = *index + 1;
		return (1);
	}
	return (0);
}
