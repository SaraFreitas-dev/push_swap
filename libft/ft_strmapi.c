/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:42:43 by sarfreit          #+#    #+#             */
/*   Updated: 2025/10/22 17:42:43 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	unsigned int		len;
	char				*new_str;

	if (!s || !f)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	new_str = (char *) malloc(len + 1);
	if (!new_str)
		return (NULL);
	while (i < len)
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
/*
static char	make_upper_even(unsigned int i, char c)
{
	if ((i % 2 == 0) && (c >= 'a') && (c <= 'z'))
		c -= 32;
	if ((i % 2 != 0) && (c >= 'A') && (c <= 'Z'))
		c += 32;
	return (c);
}
#include <stdio.h>

int	main(void)
{
	char	*s = "Hello THERE, how are YOU?";
	char *new_str = ft_strmapi(s, make_upper_even);

	printf("%s\n", new_str);
	free(new_str);
	return (0);
}
*/