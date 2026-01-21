/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 03:37:03 by sarfreit          #+#    #+#             */
/*   Updated: 2025/08/31 03:37:03 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

/*
int	main(void)
{
	char is_digit = '1';
	char not_digit = ',';

	printf("1: %d, ,: %d", ft_isdigit(is_digit), ft_isdigit(not_digit));
}
*/