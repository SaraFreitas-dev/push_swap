/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 23:17:25 by sarfreit          #+#    #+#             */
/*   Updated: 2026/01/21 23:17:25 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_swap_moves(char *op, t_stack **a, t_stack **b)
{
	int	value;
	int	value2;

	if (ft_strcmp(op, "sa") == 0)
	{
		value = swap_nodes(a);
		if (value)
			ft_printf("sa\n");
	}
	else if (ft_strcmp(op, "sb") == 0)
	{
		value = swap_nodes(b);
		if (value)
			ft_printf("sb\n");
	}
	else if (ft_strcmp(op, "ss") == 0)
	{
		value = swap_nodes(a);
		value2 = swap_nodes(b);
		if (value || value2)
			ft_printf("ss\n");
	}
}

/*
Para sa

se op for "sa"

chama swap_nodes(&a)

se retornou 1

imprime "sa\n"

Para pb

se op for "pb"

chama push_nodes(&a, &b)

se retornou 1

imprime "pb\n"

Para rr

chama rotate_nodes(&a)

chama rotate_nodes(&b)

se pelo menos uma retornou 1

imprime "rr\n"*/
