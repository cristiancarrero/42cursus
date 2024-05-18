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
// Función para duplicar el contenido de un nodo
void *duplicate_content(void *content)
{
    // Supongamos que el contenido es una cadena de caracteres
    char *original = (char *)content;
    char *duplicate = ft_strdup(original);
    return (void *)duplicate;
}

// Función para liberar la memoria del contenido de un nodo
void free_content(void *content)
{
    free(content);
}

int main(void)
{
    // Crear una lista inicial con algunos elementos
    t_list *list = ft_lstnew("First");
    ft_lstadd_back(&list, ft_lstnew("Second"));
    ft_lstadd_back(&list, ft_lstnew("Third"));

    // Aplicar la función ft_lstmap para duplicar la lista
    t_list *duplicated_list = ft_lstmap(list, &duplicate_content, &free_content);

    // Imprimir la lista duplicada
    printf("Lista original:\n");
    ft_lstiter(list, &print_content);

    printf("\nLista duplicada:\n");
    ft_lstiter(duplicated_list, &print_content);

    // Liberar la memoria de ambas listas
    ft_lstclear(&list, &free_content);
    ft_lstclear(&duplicated_list, &free_content);

    return 0;
}
*/
