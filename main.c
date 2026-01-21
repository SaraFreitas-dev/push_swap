/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 20:44:12 by sarfreit          #+#    #+#             */
/*   Updated: 2026/01/07 19:54:26 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    t_stack *a;
    t_stack *b;

    a = NULL;
    b = NULL;

    if (argc < 2)
        return (0);
    error_checker(argc, argv);
    parse_args(&a, argc, argv);
    if (is_sorted(a))
        return (0);

    sort_dispatcher(&a, &b);
    return (0);
}
