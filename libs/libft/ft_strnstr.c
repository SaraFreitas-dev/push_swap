/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 01:39:50 by sarfreit          #+#    #+#             */
/*   Updated: 2025/10/13 01:39:50 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!needle[j])
		return ((char *)haystack);
	while ((len > i) && haystack[i])
	{
		j = 0;
		while ((i + j < len) && needle[j] && (haystack[i + j] == needle[j]))
		{
			j++;
			if (!needle[j])
				return ((char *)(haystack + i));
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char *haystack = "hello";
	char *needle = "lo";
	printf("%s", ft_strnstr(haystack, needle, 6));
}
*/
