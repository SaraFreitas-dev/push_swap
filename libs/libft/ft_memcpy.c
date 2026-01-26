/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 17:00:06 by sarfreit          #+#    #+#             */
/*   Updated: 2025/09/27 17:00:06 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*temp_dst;
	const char	*temp_src;

	temp_dst = (char *) dst;
	temp_src = (const char *) src;
	if (!dst && !src)
		return (dst);
	while (n > 0)
	{
		*(temp_dst++) = *(temp_src++);
		n--;
	}
	return (dst);
}
/*
int main(void)
{
char src[] = "Hello World!";
char dst[20];

printf("Before copy: dst = '%s'\n", dst);
ft_memcpy(dst, src, ft_strlen(src) + 1); // +1 to copy the null terminator
printf("After copy: dst = '%s'\n", dst);

// Test with partial copy
char partial[20] = "XXXXXXXXXXXX";
ft_memcpy(partial, src, 5); // copy only "Hello"
partial[5] = '\0';
printf("Partial copy (5 chars): '%s'\n", partial);

// Test with integer array
int numbers_src[5] = {1, 2, 3, 4, 5};
int numbers_dst[5] = {0};
ft_memcpy(numbers_dst, numbers_src, sizeof(numbers_src));
printf("Numbers after copy: ");
for (int i = 0; i < 5; i++)
printf("%d ", numbers_dst[i]);
printf("\n");

return 0;
}
*/