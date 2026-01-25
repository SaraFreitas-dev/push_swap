/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_final.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 23:32:02 by sarfreit          #+#    #+#             */
/*   Updated: 2026/01/24 23:32:02 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
Loop until stack b is empty
Bring max num to the top of the stack B and move it to A
*/

void	push_back_to_a(t_stack **a, t_stack **b)
{
	while (*b)
	{
		bring_b_max_to_top(a, b);
		print_moves("pa", a, b);
	}
}

// After a chunk transfer B->A
// Rotate stack A until the lowest num is at the top

void final_rotate_min_top(t_stack **a, t_stack **b)
{
	t_stack	*min_node;
	int		pos;

	min_node = stack_min_node(*a);
	pos = position_of_node(*a, min_node);
	rotate_a_to_pos(a, b, pos);
}

// Final caller for each chunk

void	chunk_sort(t_stack **a, t_stack **b)
{
	push_chunks_to_b(a, b);
	push_back_to_a(a, b);
	final_rotate_min_top(a, b);
}