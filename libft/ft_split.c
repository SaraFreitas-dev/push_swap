/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:43:22 by sarfreit          #+#    #+#             */
/*   Updated: 2025/10/20 20:43:22 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_len(const char *s, char sep)
{
	int	i;

	i = 0;
	while (s[i] && (s[i] != sep))
	{
		i++;
	}
	return (i);
}

static int	count_fields(const char *s, char sep)
{
	int	field_len;
	int	i;

	field_len = 0;
	i = 0;
	if (!s)
		return (0);
	if (sep == '\0')
	{
		if (*s)
			return (1);
		else
			return (0);
	}
	while (s[i])
	{
		if ((s[i] != sep) && ((s[i + 1] == sep) || (s[i + 1] == '\0')))
			field_len++;
		i++;
	}
	return (field_len);
}

static void	*free_split(char **s)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		line;
	int		pos;
	int		fields;
	int		len;
	char	**new_str;

	if (!s)
		return (NULL);
	line = 0;
	pos = 0;
	fields = count_fields(s, c);
	new_str = (char **)ft_calloc((fields + 1), sizeof(char *));
	if (!new_str)
		return (NULL);
	while (line < fields)
	{
		while (s[pos] && (s[pos] == c))
			pos++;
		len = word_len((s + pos), c);
		new_str[line++] = ft_substr(s, pos, len);
		if (!new_str[line - 1])
			return (free_split(new_str));
		pos += len;
	}
	return (new_str);
}
/*
#include <stdio.h>

int	main(void)
{

	char *s = ",aaa,,b,c,";
	char **new_str = ft_split(s, ',');
	int i = 0;

	printf("%d\n", count_fields(s, ','));
	printf("%d\n", word_len(s, ','));
	while (new_str[i])
	{
		printf("%s", new_str[i]);
		ft_putchar_fd('\n', 1);
		i++;
	}
	free_split(new_str);
	return (0);
}
*/