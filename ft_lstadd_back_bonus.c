/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 13:17:07 by ccarrero          #+#    #+#             */
/*   Updated: 2024/04/01 13:17:42 by ccarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (lst)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			tmp = ft_lstlast(*(lst));
			tmp->next = new;
		}
	}
}
/*
int	main(void)
{
	t_list *list = NULL; 

	ft_lstadd_back(&list, ft_lstnew("First"));
	ft_lstadd_back(&list, ft_lstnew("Second"));
	ft_lstadd_back(&list, ft_lstnew("Third"));

	while (list)
	{
		printf("%s\n", (char *)list->content);
		list = list->next;
	}

	return (0);
}*/