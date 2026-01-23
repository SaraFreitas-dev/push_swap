/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 20:57:54 by sarfreit          #+#    #+#             */
/*   Updated: 2025/09/07 20:57:54 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*
int	main(void)
{
	char is_ascii = '1';
	char is_not = 0x80;

	printf("ascii: %d, not ascii: %d\n",
    ft_isalnum(is_ascii),
    ft_isalnum(is_not));

	return (0);
}
*/