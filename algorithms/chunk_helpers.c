/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_helpers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 11:03:56 by sarfreit          #+#    #+#             */
/*   Updated: 2026/01/24 11:03:56 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Decide the chunk size that will go to stack b to order

int	get_chunk_size(int stack_size)
{
	if (stack_size <= 50)
		return (10);
	else if (stack_size <= 100)
		return (18);
	else if (stack_size <= 500)
		return (45);
	else
		return (90);
}

// Check if the current node is still to be pushed to stack b
// if it's still part of the current "chunck" returns true, else false

int	in_range(int idx, int low, int high)
{
	if ((idx >= low) && (idx <= high))
		return (1);
	return (0);
}

// Returns the position of a node that is inside the index of the current chunk
// Else, returns -1

int	pos_first_in_range(t_stack *a, int low, int high)
{
	t_stack	*node;
	int		pos;

	node = a;
	pos = 0;
	while (node)
	{
		if (in_range(node->index, low, high))
			return (pos);
		node = node->next;
		pos++;
	}
	return (-1);
}

int	pos_last_in_range(t_stack *a, int low, int high)
{
	t_stack	*node;
	int		pos;
	int		last;

	node = a;
	pos = 0;
	last = -1;
	while (node)
	{
		if (in_range(node->index, low, high))
			last = pos;
		node = node->next;
		pos++;
	}
	return (last);
}

// Choose the index location of the number easier to move
// The first element or the last in range (to do less moves)

int	best_in_range(t_stack *a, int low, int high)
{
	t_stack	*node;
	int		first_index;
	int		last_index;
	int		stack_len;

	node = a;
	first_index = pos_first_in_range(node, low, high);
	last_index = pos_last_in_range(node, low, high);
	stack_len = stack_size(node);
	if (first_index == -1)
		return (-1);
	if (first_index <= (stack_len - last_index))
		return (first_index);
	else
		return (last_index);
}
