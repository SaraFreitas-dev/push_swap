/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatcher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 20:58:19 by sarfreit          #+#    #+#             */
/*   Updated: 2026/01/07 19:53:29 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Create the stack a
void    parse_args(t_stack **a, int argc, char **argv)
{
    int i;

    i = 1;
    while (i < argc)
    {
        
    }
}
// Calculate the size of each stack
int stack_size(t_stack *stack)
{
    int i;

    i = 0;
    while (stack)
    {
        i++;
        stack = stack->next;
    }
    return (i);
}

// Choose the sort mechanism
void    sort_dispatcher(t_stack **a, t_stack **b)
{
    int size_a;
    
    size_a = stack_size(*a);
    if (size_a <= 3)
        sort_three(a);
    else if (size_a <= 5)
        sort_five(a);
    else
        turk_sort(a, b);
}