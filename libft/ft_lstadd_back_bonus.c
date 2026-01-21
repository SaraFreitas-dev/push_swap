/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 19:19:11 by sarfreit          #+#    #+#             */
/*   Updated: 2025/10/23 20:35:45 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}
/*
#include <stdio.h>

int main(void)
{
    t_list *list = NULL;
    t_list *node1;
    t_list *node2;

    node1 = ft_lstnew("Hello");
    node2 = ft_lstnew("World");

    ft_lstadd_back(&list, node1);
    ft_lstadd_back(&list, node2);
	
    t_list *last = ft_lstlast(list);

    if (last)
        printf("Last node: %s\n", (char *)last->content);

    return (0);
}
*/