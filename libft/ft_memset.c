/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 21:24:58 by sarfreit          #+#    #+#             */
/*   Updated: 2025/09/07 21:24:58 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*new_str;

	new_str = (unsigned char *) b;
	while (len > 0)
	{
		*new_str = (unsigned char) c;
		new_str++;
		len--;
	}
	return (b);
}
/*
int	main(void)
{
    char str[20] = "Hello World!";

    printf("Before: %s\n", str);
    ft_memset(str + 6, '*', 5); // replace 5 characters starting at index 6
	// or ft_memset(&str[6], '*', 5);
    printf("After:  %s\n", str);

    // Test with an integer array
    int arr[5] = {1, 2, 3, 4, 5};
    ft_memset(arr, 0, sizeof(arr));

    printf("Array after memset: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
*/