/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 19:58:14 by sarfreit          #+#    #+#             */
/*   Updated: 2026/01/21 23:14:34 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
sa (swap a): Swap the first 2 elements at the top of stack a.
Do nothing if there is only one element or none.
sb (swap b): Swap the first 2 elements at the top of stack b.
Do nothing if there is only one element or none.
ss : sa and sb at the same time.
*/
int	swap_nodes(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;

	first = NULL;
	second = NULL;
	if (!stack || !*stack || !(*stack)->next)
		return (0);
	first = *stack;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
	return (1);
}

/*
pa (push a): Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty.
pb (push b): Take the first element at the top of a and put it at the top of b.
Do nothing if a is empty
Pushes 1 to 2.
*/
int	push_nodes(t_stack **stack1, t_stack **stack2)
{
	t_stack	*head1;
	t_stack	*new_head1;

	if (!stack1 || !*stack1)
		return (0);
	head1 = *stack1;
	new_head1 = head1->next;
	head1->next = *stack2;
	*stack2 = head1;
	*stack1 = new_head1;
	return (1);
}

/*
ra (rotate a): Shift up all elements of stack a by 1.
The first element becomes the last one.
rb (rotate b): Shift up all elements of stack b by 1.
The first element becomes the last one.
rr : ra and rb at the same time.
*/

t_stack	*last_element(t_stack *stack)
{
	t_stack	*node;

	if (!stack)
		return (NULL);
	node = stack;
	while (node->next)
		node = node->next;
	return (node);
}

int	rotate_nodes(t_stack **stack)
{
	t_stack	*head;
	t_stack	*last;

	if (!stack || !*stack || !(*stack)->next)
		return (0);
	head = *stack;
	*stack = head->next;
	head->next = NULL;
	last = last_element(*stack);
	last->next = head;
	return (1);
}

/*
rra (reverse rotate a): Shift down all elements of stack a by 1.
The last element becomes the first one.
rrb (reverse rotate b): Shift down all elements of stack b by 1.
The last element becomes the first one.
rrr : rra and rrb at the same time.
*/

int	reverse_rotate(t_stack **stack)
{
	t_stack	*prev_last;
	t_stack	*head;

	if (!stack || !*stack || !(*stack)->next)
		return (0);
	head = last_element(*stack);
	prev_last = *stack;
	while (prev_last->next != head)
		prev_last = prev_last->next;
	prev_last->next = NULL;
	head->next = *stack;
	*stack = head;
	return (1);
}
