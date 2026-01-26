/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 20:46:29 by sarfreit          #+#    #+#             */
/*   Updated: 2025/10/18 20:46:29 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = malloc (count * size);
	if (!str)
		return (NULL);
	while (i < (count * size))
		str[i++] = 0;
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	unsigned char	*str = ft_calloc(5, sizeof(char));
	printf("Array elements after calloc: ");
	for (int i = 0; i < 5; i++)
		printf("%d ", str[i]);
	free(str);
	return (0);
}
*/