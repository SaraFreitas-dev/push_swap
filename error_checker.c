/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 21:20:44 by sarfreit          #+#    #+#             */
/*   Updated: 2026/01/25 22:58:03 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/// Only digits and one sign

int	is_valid_int_token(char *s)
{
	int	i;

	i = 0;
	if (!s || !s[0])
		return (0);
	if ((s[i] == '-') || s[i] == '+')
		i++;
	if (!ft_isdigit(s[i]))
		return (0);
	while (s[i])
	{
		if (!ft_isdigit(s[i]))
			return (0);
		i++;
	}
	return (1);
}

// Check if num is not exceeding the integer limits

int	is_in_range_int(char *s)
{
	long	num;

	num = ft_atol(s);
	if ((num >= -2147483648L) && (num <= 2147483647L))
		return (1);
	return (0);
}

// Check for duplicate numbers

int	has_duplicate(t_stack *stack, int value)
{
	t_stack	*current_node;

	if (!stack)
		return (1);
	current_node = stack;
	while (current_node)
	{
		if (current_node->value == value)
			return (0);
		current_node = current_node->next;
	}
	return (1);
}
