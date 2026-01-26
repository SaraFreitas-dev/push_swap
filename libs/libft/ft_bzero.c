/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 15:39:15 by sarfreit          #+#    #+#             */
/*   Updated: 2025/09/27 15:39:15 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*temp;

	temp = (char *) s;
	while (n > 0)
	{
		*temp = 0;
		temp++;
		n--;
	}
}
/*
int main(void)
{
    char str[20] = "Hello World!";
    printf("Before: %s\n", str);

    ft_bzero(str + 6, 5); // zero 5 bytes after index 6

    printf("After:  %s\n", str); 
    return (0);
}
*/