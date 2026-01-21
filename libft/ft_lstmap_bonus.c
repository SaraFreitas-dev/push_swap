/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 00:27:55 by sarfreit          #+#    #+#             */
/*   Updated: 2025/10/25 00:27:55 by sarfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//static void	del(void *content);
//static void	*f_len(void *content);

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*node;

	if (!f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		node = ft_lstnew(NULL);
		if (!node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		node->content = f(lst->content);
		if (!node->content)
		{
			free(node);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, node);
		lst = lst->next;
	}
	return (new_list);
}
/*
#include <stdio.h>

static void	*f_len(void *content)
{
	size_t	*len;

	len = malloc(sizeof(size_t));
	if (!len)
		return (NULL);
	*len = ft_strlen((char *)content);
	return (len);
}

static void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*lst = NULL;
	t_list	*new = NULL;

	ft_lstadd_back(&lst, ft_lstnew("A"));
	ft_lstadd_back(&lst, ft_lstnew("BB"));
	ft_lstadd_back(&lst, ft_lstnew("CCC"));

	new = ft_lstmap(lst, f_len, del);

	t_list *tmp = new;
	while (tmp)
	{
		printf("%zu\n", *(size_t *)tmp->content);
		tmp = tmp->next;
	}
	ft_lstclear(&new, del);

	return (0);
}
*/