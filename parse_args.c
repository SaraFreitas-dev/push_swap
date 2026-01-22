/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 12:36:43 by sarfreit          #+#    #+#             */
/*   Updated: 2026/01/22 12:36:43 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Only digits and one sign

static int is_valid_int_token(char *s)
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

static int is_in_range_int(char *s)
{
	long	num;
	
	num = ft_atol(s);
	if ((num >= -2147483648L) && (num <= 2147483647L))
		return (1);
	return (0);
}

// Check for duplicate numbers

static int has_duplicate(t_stack *stack, int value)
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

// Split the string and prepare the stack a

int	parse_args(t_stack **a, int argc, char *argv[])
{
	int		i;
	int		num;
	char	tokens;
	t_stack	*current_node;

	i = 1;
	current_node = *a;
	while (argv[i])
	{
		tokens = ft_split(argv[i], ' ');
		if (!tokens || !tokens[0]
				||!is_valid_int_token(argv[i]) || !is_in_range_int(argv[i]))
		{
			ft_printf("Error\n");
			return (0);
		}
		num = ft_atoi(argv[i]);
		if (!has_duplicate(*a, num))
		{
			ft_printf("Error\n");
			return (0);
		}
		current_node->next = ft_lstnew(argv[i++]);
	}
	return (1);
}