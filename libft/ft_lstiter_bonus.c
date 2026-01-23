/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 21:56:05 by sarfreit          #+#    #+#             */
/*   Updated: 2025/10/24 21:56:05 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//void	print_content(void *content);
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*node;

	node = lst;
	if (!lst || !f)
		return ;
	while (node)
	{
		f(node->content);
		node = node->next;
	}
}
/*
#include <stdio.h>

void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}

int	main(void)
{
	t_list *list;

	list = ft_lstnew("Hello");
	ft_lstadd_back(&list, ft_lstnew("World"));

	ft_lstiter(list, print_content);

	return (0);
}
*/