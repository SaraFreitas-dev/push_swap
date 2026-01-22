/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 20:50:26 by sarfreit          #+#    #+#             */
/*   Updated: 2026/01/22 17:41:43 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft/libft.h"
#include "ft_printf/ft_printf.h"

typedef struct s_stack
{
    int             value;
    int             index;
    struct s_stack  *next;
}   t_stack;

typedef struct s_ps
{
    t_stack *a;
    t_stack *b;
    int     size_a;
    int     size_b;
}   t_ps;

// move_operations.c
int			swap_nodes(t_stack **stack);
int			push_nodes(t_stack **stack1, t_stack **stack2);
int			rotate_nodes(t_stack **stack);
int			reverse_rotate(t_stack **stack);

// helper_functions.c
int			ft_strcmp(const char *s1, const char *s2);
long 		ft_atol(char *s);
void		add_node(t_stack **lst, t_stack *new, char *type);
t_stack		*new_node(int value);

// error_checker
int			is_valid_int_token(char *s);
int			is_in_range_int(char *s);
int			has_duplicate(t_stack *stack, int value);

// print_operationc.c
void		print_moves(char *op, t_stack **a, t_stack **b);

// parse_args.c | Check for errors and prepare stack a
int			parse_args(t_stack **a, int argc, char *argv[]);

#endif