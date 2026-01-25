/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 23:17:25 by sarfreit          #+#    #+#             */
/*   Updated: 2026/01/21 23:17:25 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_swap(char *op, t_stack **a, t_stack **b)
{
	int	value;
	int	value2;

	if (ft_strcmp(op, "sa") == 0)
	{
		value = swap_nodes(a);
		if (value)
			ft_printf("sa\n");
	}
	else if (ft_strcmp(op, "sb") == 0)
	{
		value = swap_nodes(b);
		if (value)
			ft_printf("sb\n");
	}
	else if (ft_strcmp(op, "ss") == 0)
	{
		value = swap_nodes(a);
		value2 = swap_nodes(b);
		if (value || value2)
			ft_printf("ss\n");
	}
}

void	print_push(char *op, t_stack **a, t_stack **b)
{
	int	value;

	if (ft_strcmp(op, "pa") == 0)
	{
		value = push_nodes(b, a);
		if (value)
			ft_printf("pa\n");
	}
	else if (ft_strcmp(op, "pb") == 0)
	{
		value = push_nodes(a, b);
		if (value)
			ft_printf("pb\n");
	}
}

void	print_rotate(char *op, t_stack **a, t_stack **b)
{
	int	value;
	int	value2;

	if (ft_strcmp(op, "ra") == 0)
	{
		value = rotate_nodes(a);
		if (value)
			ft_printf("ra\n");
	}
	else if (ft_strcmp(op, "rb") == 0)
	{
		value = rotate_nodes(b);
		if (value)
			ft_printf("rb\n");
	}
	else if (ft_strcmp(op, "rr") == 0)
	{
		value = rotate_nodes(a);
		value2 = rotate_nodes(b);
		if (value || value2)
			ft_printf("rr\n");
	}
}

void	print_reverse_rotate(char *op, t_stack **a, t_stack **b)
{
	int	value;
	int	value2;

	if (ft_strcmp(op, "rra") == 0)
	{
		value = reverse_rotate(a);
		if (value)
			ft_printf("rra\n");
	}
	else if (ft_strcmp(op, "rrb") == 0)
	{
		value = reverse_rotate(b);
		if (value)
			ft_printf("rrb\n");
	}
	else if (ft_strcmp(op, "rrr") == 0)
	{
		value = reverse_rotate(a);
		value2 = reverse_rotate(b);
		if (value || value2)
			ft_printf("rrr\n");
	}
}

void	print_moves(char *op, t_stack **a, t_stack **b)
{
	if ((ft_strcmp(op, "sa") == 0) || (ft_strcmp(op, "sb") == 0)
		|| (ft_strcmp(op, "ss") == 0))
		print_swap(op, a, b);
	else if ((ft_strcmp(op, "pa") == 0) || (ft_strcmp(op, "pb") == 0))
		print_push(op, a, b);
	else if ((ft_strcmp(op, "ra") == 0) || (ft_strcmp(op, "rb") == 0)
		|| (ft_strcmp(op, "rr") == 0))
		print_rotate(op, a, b);
	else if ((ft_strcmp(op, "rra") == 0) || (ft_strcmp(op, "rrb") == 0)
		|| (ft_strcmp(op, "rrr") == 0))
		print_reverse_rotate(op, a, b);
}
