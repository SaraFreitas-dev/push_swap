/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:53:12 by sarfreit          #+#    #+#             */
/*   Updated: 2025/10/23 19:17:34 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*node;

	if (!lst)
		return (NULL);
	node = lst;
	while (node->next)
	{
		node = node->next;
	}
	return (node);
}
/*
#include <stdio.h>

int	main(void)
{
    t_list *list = NULL;
    t_list *node1 = ft_lstnew("Hello");
    t_list *node2 = ft_lstnew("World");

    ft_lstadd_front(&list, node2);
    ft_lstadd_front(&list, node1);

    printf("%s\n", (char *)ft_lstlast(list)->content);
	
	return (0);
}
*/