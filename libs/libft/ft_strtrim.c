/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 20:52:29 by sarfreit          #+#    #+#             */
/*   Updated: 2025/10/19 20:52:29 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_in_set(char c, char const *set)
{
	size_t	j;

	j = 0;
	while (set[j])
	{
		if (set[j] == c)
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while ((start < end) && (ft_in_set(s1[end - 1], set)))
		end--;
	if (start >= end)
		return (ft_strdup(""));
	new_str = (char *) malloc((end - start) + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	while (start < end)
		new_str[i++] = s1[start++];
	new_str[i] = '\0';
	return (new_str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s1 = "-_-_Hell_o-_-_";
	char	*set = "-_";
	char	*new_str = ft_strtrim(s1, set);
	printf("%s", new_str);
	free(new_str);
	return (0);
}
*/