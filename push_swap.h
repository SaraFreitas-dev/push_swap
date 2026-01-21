/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 20:50:26 by sarfreit          #+#    #+#             */
/*   Updated: 2026/01/21 23:38:12 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

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

//move_operations.c
int	swap_nodes(t_stack **stack);
int	push_nodes(t_stack **stack1, t_stack **stack2);
int	rotate_nodes(t_stack **stack);
int	reverse_rotate(t_stack **stack);

//helper_functions.c
int	ft_strcmp(const char *s1, const char *s2);

#endif