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

// Split the string and prepare the stack a

void	free_split(char **tokens)
{
	int	i;

	if (!tokens)
		return ;
	i = 0;
	while (tokens[i])
	{
		free(tokens[i]);
		i++;
	}
	free(tokens);
}


static int	handle_token(t_stack **a, char *token)
{
	int		num;
	t_stack	*node;

	if (!is_valid_int_token(token) || !is_in_range_int(token))
		return (0);
	num = ft_atoi(token);
	if (!has_duplicate(*a, num))
		return (0);
	node = new_node(num);
	if (!node)
		return (0);
	add_node(a, node, "back");
	return (1);
}
int	parse_args(t_stack **a, int argc, char *argv[])
{
	int		i;
	int		j;
	char	**tokens;

	i = 1;
	while (i < argc)
	{
		tokens = ft_split(argv[i], ' ');
		if (!tokens || !tokens[0])
			return (free_split(tokens), 0);
		j = 0;
		while (tokens[j])
			if (!handle_token(a, tokens[j++]))
				return (free_split(tokens), 0);
		free_split(tokens);
		i++;
	}
	return (1);
}
