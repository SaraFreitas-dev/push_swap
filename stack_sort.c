/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 00:14:29 by sarfreit          #+#    #+#             */
/*   Updated: 2026/01/23 00:14:29 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *stack)
{
	t_stack	*node;
	t_stack	*next_node;

	node = stack;
	if ( (!node) || (!node->next))
		return (1);
	while (node->next)
	{
		next_node = node->next;
		if (node->value > next_node->value)
			return (0);
		node = node->next;
	}
	return (1);
}
// Choose the sort mechanism

int	sort_dispatcher(t_stack **a, t_stack **b)
{
    int 	size_a;
	t_stack	*node;
    
	node = *a;
	if (is_sorted(a))
		return (1);
    size_a = stack_size(*a);
    if (size_a <= 3)
        sort_three(a);
    else if (size_a <= 5)
        sort_five(a);
    else
        turk_sort(a, b);
	return (0);
}