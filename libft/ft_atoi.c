/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:18:03 by sarfreit          #+#    #+#             */
/*   Updated: 2025/10/13 22:20:29 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	while ((str[i] == ' ') || ((str[i] >= 9) && (str[i] <= 13)))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	num *= sign;
	return (num);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_atoi("42"));           // 42
	printf("%d\n", ft_atoi("   -42"));       // -42
	printf("%d\n", ft_atoi("+123"));         // 123
	printf("%d\n", ft_atoi("   123abc"));    // 123
	printf("%d\n", ft_atoi("abc123"));       // 0
	printf("%d\n", ft_atoi("--123"));        // 0
	printf("%d\n", ft_atoi("++123"));        // 0
	printf("%d\n", ft_atoi(""));             // 0
	printf("%d\n", ft_atoi("2147483647"));   // max int
	printf("%d\n", ft_atoi("-2147483648"));  // min int
}
*/
