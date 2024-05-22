/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 21:44:03 by marvin            #+#    #+#             */
/*   Updated: 2024/03/22 21:44:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	t_list *last = *lst;
	while (last->next)
		last = last->next;
	last->next = new;
}
/*
int main(void)
{
	t_list *list = NULL;

	ft_lstadd_back(&list, ft_lstnew("First"));
	ft_lstadd_back(&list, ft_lstnew("Second"));
	ft_lstadd_back(&list, ft_lstnew("Third"));

	t_list *last = ft_lstlast(list);

	if (last)
		printf("El último elemento de la lista es: %s\n", (char *)last->content);
	else
		printf("La lista está vacía\n");

	return 0;
}*/
