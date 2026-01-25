/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_rotations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 14:28:38 by sarfreit          #+#    #+#             */
/*   Updated: 2026/01/24 14:28:38 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
Uses best_in_range to get a pos of the number to transfer to b
And get the easiest less cost move
*/

void	rotate_a_to_pos(t_stack **a, t_stack **b, int pos)
{
	int		len;
	int		moves;

	len = stack_size(*a);
	if ((pos < 0) || (pos >= len))
			return ;
	if (pos <= (len / 2))
	{
		moves = pos;
		while (moves > 0)
		{
			print_moves("ra", a, b);
			moves--;
		}
	}	
	else
	{
		moves = len - pos;
		while (moves > 0)
		{
			print_moves("rra", a, b);
			moves--;
		}
	}
}

/*
After pb / everytime stack b receives a new number,
Checks if its better to move it to the bottom of the stack to organize
To leave bigger values at the top to later move them to stack a
*/

void	smart_push_to_b(t_stack **a, t_stack **b, int low, int high)
{
	int		middle_of_chunk;

	if (!b || !*b)
		return ;
	middle_of_chunk = (low + high) / 2;
	if (((*b)->index != low) && ((*b)->index < middle_of_chunk))
		print_moves("rb", a, b);
}

/*
Main loop A->B
When best_in_range == -1, it goes of to the next chunk
*/

void	push_chunks_to_b(t_stack **a, t_stack **b)
{
	int	chunck_len;
	int	stack_len;
	int	low;
	int	high;
	int	pos;

	stack_len = stack_size(*a);
	chunck_len = get_chunk_size(stack_len);
	low = 0;
	high = chunck_len - 1;
	while (*a && (low < stack_len))
	{
		pos = best_in_range(*a, low, high);
		if (pos == -1)
		{
			low += chunck_len;
			high += chunck_len;
		}
		else
		{
			rotate_a_to_pos(a, b, pos);
			print_moves("pb", a, b);
			smart_push_to_b(a, b, low, high);
		}
	}
}

// Bring the max number of stack b to the top

void bring_b_max_to_top(t_stack **a, t_stack **b)
{
	t_stack	*max_num;
	int		stack_len;
	int		pos;
	int		moves;

	if (!b || !*b)
		return ;
	stack_len = stack_size(*b);	
	max_num = stack_max_node(*b);
	pos = position_of_node(*b, max_num);
	if (*b == max_num)
    	return ;
	if (pos <= (stack_len / 2))
		moves = pos;
	else
		moves = stack_len - pos;
	while (moves-- > 0)
	{
		if (pos <= (stack_len / 2))
			print_moves("rb", a, b);
		else
			print_moves("rrb", a, b);
	}
} 

