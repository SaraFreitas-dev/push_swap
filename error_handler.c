/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 21:20:44 by sarfreit          #+#    #+#             */
/*   Updated: 2026/01/07 19:54:46 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Check if all args are numbers
int error_checker(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    j = 0;
    while (i < argc)
    {
        while (argv[i][j])
        {
            j = 0;
            while (ft_isdigit(argv[i][j]))
            else
            {
                ft_putstr_fd("Error\n", 1);
                return (0);
            }
        }
            i++;
    }
    return (1);
}

// Check if any of the numbers is repeated