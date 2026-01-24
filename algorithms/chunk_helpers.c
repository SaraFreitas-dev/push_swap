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

// Decide the chink size that will go to stack b to order

int	get_chunk_size(int stack_size)
{
	if (stack_size <= 50)
		return (10);
	else if (stack_size <= 100)
		return (20);
	else if (stack_size <= 500)
		return (50);
	else
		return (100);
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

// Choose the easiest move, the first element or the last in range (to do less moves)

int	best_in_range(t_stack *a, int low, int high)
{
	
}