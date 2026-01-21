/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 21:45:08 by sarfreit          #+#    #+#             */
/*   Updated: 2025/09/01 21:45:08 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	char is_digit = '1';
	char is_alpha = 'a';
	char is_not = ',';

	printf("1: %d, a: %d, sign: %d\n",
    ft_isalnum(is_digit),
    ft_isalnum(is_alpha),
    ft_isalnum(is_not));

	return (0);
}
*/