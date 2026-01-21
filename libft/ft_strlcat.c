/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 02:50:01 by sarfreit          #+#    #+#             */
/*   Updated: 2025/10/11 02:50:01 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_src;
	size_t	len_dst;

	i = 0;
	j = 0;
	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	if (dstsize <= len_dst)
		return (len_src + dstsize);
	while (dst[i] && (i < (dstsize - 1)))
		i++;
	while (src[j] && (i < (dstsize - 1)))
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (len_dst + len_src);
}
/*
#include <stdio.h>

int	main(void)
{
	size_t	dstsize = 8;
	char	dst[8] = "hi ";
	char	src[6] = "hello";
	size_t	len = ft_strlcat(dst, src, dstsize);

	printf("%zu\n", len);
	printf("%s\n", dst);

	return (0);
}
*/
