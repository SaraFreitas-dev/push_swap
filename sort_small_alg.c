/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_alg.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 11:14:45 by sarfreit          #+#    #+#             */
/*   Updated: 2026/01/23 11:14:45 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack **a, t_stack **b)
{
	t_stack	*max;
	int		pos;

	if (!a || !*a || !(*a)->next)
		return ;
	max = stack_max_node(*a);
	pos = position_of_node(*a, max);
	if (pos == 0)
		print_moves("ra", a, b);
	else if (pos == 1)
		print_moves("rra", a, b);
	if ((*a)->value > (*a)->next->value)
		print_moves("sa", a, b);
}
