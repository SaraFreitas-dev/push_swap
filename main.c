/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 20:44:12 by sarfreit          #+#    #+#             */
/*   Updated: 2026/01/25 13:05:01 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// For tests purpose only !

void	print_op_test(t_stack *a, t_stack *b)
{
	t_stack	*node_a;
	t_stack	*node_b;

	node_a = a;
	node_b = b;
	ft_printf("A | B\n");
	while (node_a || node_b)
	{
		if (node_a)
		{
			ft_printf("%d", node_a->value);
			node_a = node_a->next;
		}
		ft_printf(" | ");
		if (node_b)
		{
			ft_printf("%d", node_b->value);
			node_b = node_b->next;
		}
		ft_printf("\n");
	}
	ft_printf("\n");
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (argc < 2)
		return (0);
	if (!parse_args(&a, argc, argv))
	{
		ft_putendl_fd("Error", 2);
		free_stack(&a);
		return (1);
	}
	if (is_sorted(a))
	{
		free_stack(&a);
		return (0);
	}
	assign_index(a);
	sort_dispatcher(&a, &b);
	free_stack(&a);
	free_stack(&b);
	return (0);
}


