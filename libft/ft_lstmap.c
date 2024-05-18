/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrero <ccarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 13:41:18 by ccarrero          #+#    #+#             */
/*   Updated: 2024/04/01 16:39:37 by ccarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	void	*content;
	t_list	*new_node;

	new_lst = NULL;
	while (lst)
	{
		content = f(lst->content);
		if (!content)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			ft_lstclear(&new_lst, del);
			del(content);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}
/*
void *duplicate_content(void *content)
{
    return ft_strdup((char *)content);
}

void free_content(void *content)
{
    free(content);
}

void print_content2(void *content)
{
    printf("%s\n", (char *)content);
}

int main(void)
{
    t_list *list = ft_lstnew(ft_strdup("First"));

    t_list *duplicated_list = ft_lstmap(list, duplicate_content, free_content);

    printf("Lista original:\n");
    ft_lstiter(list, print_content2);

    printf("Lista duplicada:\n");
    ft_lstiter(duplicated_list, print_content2);

    ft_lstclear(&list, free_content);
    ft_lstclear(&duplicated_list, free_content);

    return 0;
}*/
