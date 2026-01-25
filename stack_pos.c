/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_pos.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 00:14:54 by sarfreit          #+#    #+#             */
/*   Updated: 2026/01/23 00:14:54 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_min_node(t_stack *stack)
{
	t_stack	*min_node;
	t_stack	*node;

	if (!stack)
		return (NULL);
	node = stack;
	min_node = node;
	while (node)
	{
		if (node->value < min_node->value)
			min_node = node;
		node = node->next;
	}
	return (min_node);
}
t_stack	*stack_max_node(t_stack *stack)
{
	t_stack	*max_node;
	t_stack	*node;

	if (!stack)
		return (NULL);
	node = stack;
	max_node = node;
	while (node)
	{
		if (node->value > max_node->value)
			max_node = node;
		node = node->next;
	}
	return (max_node);
}
// For example, find index of the max/min number

int		position_of_node(t_stack *stack, t_stack *target)
{
	int		index;
	t_stack	*node;

	index = 0;
	if (!stack || !target)
		return (-1);
	node = stack;
	while (node)
	{
		if (node == target)
			return (index);
		index++;
		node = node->next;
	}
	return (-1);
}

// For each number to have an index, sorted by raking
// "How many values are smaller than runner?" 2(index=1), 1(index=0), 3(index=2), 4(index=3)

void	assign_index(t_stack *stack)
{
	t_stack	*runner;
	t_stack	*node;
	int		rank;

	if (!stack)
		return ;
	node = stack;
	while (node)
	{
		rank = 0;
		runner = stack;
		while (runner)
		{
			if (runner->value < node->value)
				rank++;
			runner = runner->next;
		}
		node->index = rank;
		node = node->next;
	}
}

int	position_by_index(t_stack *s, int target_idx)
{
	int	pos;

	pos = 0;
	while (s)
	{
		if (s->index == target_idx)
			return (pos);
		s = s->next;
		pos++;
	}
	return (-1);
}


