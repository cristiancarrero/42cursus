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
void *f(void *first_character)
{
    ((char *)first_character)[0] = 'w';
    return first_character;
}

// Función para eliminar el contenido de un nodo
void del(void *content)
{
    printf("del - %s\n", (char *)content);
    free(content);
}

int main(void)
{
    t_list *list;
    t_list *lst0;
    t_list *lst1;
    char *a1;
    int size_of_list = 2;

    a1 = malloc(sizeof(char) * 6);
    ft_strlcpy(a1, "word1", 6);
    list = ft_lstnew(a1);

    lst0 = list;

    while (size_of_list <= 4)
    {
        a1 = malloc(sizeof(char) * 6);
        ft_strlcpy(a1, "word", 6);
        a1[4] = size_of_list + '0';
        lst1 = ft_lstnew(a1);
        ft_lstadd_back(&list, lst1);
        size_of_list++;
    }

    t_list *duplicated_list = ft_lstmap(list, f, del);

    printf("Lista original:\n");
    while (lst0)
    {
        printf("%s\n", (char *)lst0->content);
        lst0 = lst0->next;
    }

    printf("\nLista duplicada:\n");
    while (duplicated_list)
    {
        printf("%s\n", (char *)duplicated_list->content);
        duplicated_list = duplicated_list->next;
    }

    ft_lstclear(&list, del);

    return 0;
}

void print_content(void *content)
{
    printf("%s\n", (char *)content);
}

int main(void)
{
    // Crear una lista inicial con algunos elementos
    t_list *list = ft_lstnew("First");
    ft_lstadd_back(&list, ft_lstnew("Second"));
    ft_lstadd_back(&list, ft_lstnew("Third"));

    // Aplicar la función ft_lstiter para imprimir el contenido de cada nodo
    ft_lstiter(list, &print_content);

    // Liberar la memoria de la lista
    ft_lstclear(&list, &free);

    return 0;
}
*/
