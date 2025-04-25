/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_nbrs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenibaud <jenibaud@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:00:05 by jenibaud          #+#    #+#             */
/*   Updated: 2025/04/24 14:38:32 by jenibaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	has_forbidden(char *str)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (ft_isdigit(str[i]))
			nb++;
		if (ft_strlen(str) == 2 && (str[i] == '-' && !ft_isdigit(str[i + 1])))
			return (0);
		if ((str[i] == '+' && !ft_isdigit(str[i + 1]))
			|| (str[i] == '-' && !ft_isdigit(str[i + 1])))
			return (0);
		i++;
	}
	return (nb);
}

int	check_nbrs(int argc, char **argv)
{
	int	i;

	i = 1;
	while (--argc)
	{
		if (!has_forbidden(argv[i]))
			return (0);
		i++;
	}
	return (1);
}
