/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 21:39:51 by sarfreit          #+#    #+#             */
/*   Updated: 2025/10/24 21:39:51 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//void	del(void *content);
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node;

	while (*lst)
	{
		node = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = node;
	}
}
/*
#include <stdio.h>

void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*list;

	// create one node
	list = ft_lstnew(malloc(10));
	if (!list)
		return (1);

	// clear it
	ft_lstclear(&list, del);

	// check if it worked
	if (list == NULL)
		printf("List cleared\n");
	else
		printf("List not cleared\n");

	return (0);
}
*/