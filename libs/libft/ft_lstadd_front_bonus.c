/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:53:07 by sarfreit          #+#    #+#             */
/*   Updated: 2025/10/23 19:10:08 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>

int main(void)
{
    t_list *list = NULL;
    t_list *node1;
    t_list *node2;

    node1 = ft_lstnew("World");
    node2 = ft_lstnew("Hello");

    ft_lstadd_front(&list, node1);
    ft_lstadd_front(&list, node2);

    t_list *tmp = list;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}
    return (0);
}
*/