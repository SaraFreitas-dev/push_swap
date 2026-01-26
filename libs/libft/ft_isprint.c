/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 21:07:25 by sarfreit          #+#    #+#             */
/*   Updated: 2025/09/07 21:07:25 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if ((c >= 32) && (c <= 126))
		return (1);
	return (0);
}
/*
int	main(void)
{
	char is_print = '1';
	char is_not = '\n';

	printf("print: %d, not print: %d\n",
    ft_isprint(is_print),
    ft_isprint(is_not));

	return (0);
}
*/