/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:53:30 by sarfreit          #+#    #+#             */
/*   Updated: 2025/10/23 19:10:08 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		counter;
	t_list	*node;

	counter = 0;
	node = lst;
	while (node)
	{
		node = node->next;
		counter++;
	}
	return (counter);
}
/*
#include <stdio.h>

int	main(void)
{
    t_list *list = NULL;
    t_list *node1 = ft_lstnew("One");
    t_list *node2 = ft_lstnew("Two");
    t_list *node3 = ft_lstnew("Three");

    ft_lstadd_front(&list, node3);
    ft_lstadd_front(&list, node2);
    ft_lstadd_front(&list, node1);

    printf("List size: %d\n", ft_lstsize(list));

	return (0);
}
*/