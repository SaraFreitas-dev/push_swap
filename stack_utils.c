/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 00:03:43 by sarfreit          #+#    #+#             */
/*   Updated: 2026/01/23 00:03:43 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*last_node(t_stack *stack)
{
	t_stack	*node;

	if (!stack)
		return (NULL);
	node = stack;
	while (node->next)
	{
		node = node->next;
	}
	return (node);
}
// Add nodes to the back or front of stack a on parse_args

void	add_node(t_stack **lst, t_stack *new, char *type)
{
	t_stack	*last;

	if (!lst || !new || !type)
		return ;
	new->next = NULL;
	if (type[0] == 'b')
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			last = last_node(*lst);
			last->next = new;
		}
	}
	else if (type[0] == 'f')
	{
		new->next = *lst;
		*lst = new;
	}
}

t_stack	*new_node(int value)
{
	t_stack	*node;

	node = (t_stack *)malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->value = value;
	node->next = NULL;
	return (node);
}

// Calculate the size of each stack

int	stack_size(t_stack *stack)
{
    int		counter;
	t_stack	*node;

	counter = 0;
	node = stack;
	while (node)
	{
		node = node->next;
		counter++;
	}
	return (counter);
}

void	free_stack(t_stack **stack)
{
	t_stack	*tmp;

	if (!stack || !*stack)
		return ;
	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
}
