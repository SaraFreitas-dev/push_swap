/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 20:37:33 by sarfreit          #+#    #+#             */
/*   Updated: 2025/10/23 21:19:09 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	del(void *content);
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}
/*
void	del(void *content)
{
	free(content);
}

#include <stdio.h>

int main(void)
{
t_list *list = NULL;
	t_list *node1;
	t_list *node2;

	char *hello = malloc(6);
	char *world = malloc(6);
	strcpy(hello, "Hello");
	strcpy(world, "World");

	node1 = ft_lstnew(hello);
	node2 = ft_lstnew(world);

	ft_lstadd_back(&list, node1);
	ft_lstadd_back(&list, node2);

	printf("Before: %d elements\n", ft_lstsize(list));

	t_list *tmp = list->next;

	// delete FIRST node
	ft_lstdelone(list, del);

	// move head
	list = tmp;

	printf("After: %d elements\n", ft_lstsize(list));
	ft_lstdelone(list, del);

    return (0);
}
*/