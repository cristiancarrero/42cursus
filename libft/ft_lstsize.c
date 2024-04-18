/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 21:40:34 by marvin            #+#    #+#             */
/*   Updated: 2024/03/22 21:40:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	t_list *node1 = ft_lstnew(ft_strdup("Hello"));
	t_list *node2 = ft_lstnew(ft_strdup("World"));
	t_list *node3 = ft_lstnew(ft_strdup("!"));

	if (!node1 || !node2 || !node3)
	{
		perror("Error al crear los nodos");
		return (1);
	}

	node1->next = node2;
	node2->next = node3;

	t_list *list_copy = node1;

	int size = ft_lstsize(list_copy);

	printf("El tamaño de la lista es: %d\n", size);

	ft_lstclear(&node1, &free);

	return (0);
}*/
