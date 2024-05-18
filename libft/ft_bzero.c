/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:35:39 by ccarrero          #+#    #+#             */
/*   Updated: 2024/04/17 19:47:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n > 0)
	{
		*p++ = 0;
		n--;
	}
}
/*
int main(void)
{
    char buffer[10] = "abcdefghi";
    char buffer_ft[10] = "abcdefghi";
    
    printf("Contenido inicial del buffer (ft_bzero): %s\n", buffer_ft);
    ft_bzero(buffer_ft, sizeof(buffer_ft));
    printf("Contenido después de aplicar ft_bzero: %s\n", buffer_ft);
    
    printf("Contenido inicial del buffer (bzero): %s\n", buffer);
    bzero(buffer, sizeof(buffer));
    printf("Contenido después de aplicar bzero: %s\n", buffer);
    
    return 0;
}*/
/*2main
	int buffer_is_zero(const char *buffer, size_t size)
 {
    for (size_t i = 0; i < size; i++)
    {
        if (buffer[i] != 0) {
            return 0; // No todos los bytes son cero
        }
    }
    return 1;
}

int main(void)
{
    char buffer_ft[10] = "abcdefghi";
    char buffer[10] = "abcdefghi";

    ft_bzero(buffer_ft, sizeof(buffer_ft));
    bzero(buffer, sizeof(buffer));

    if (buffer_is_zero(buffer_ft, sizeof(buffer_ft)))
    {
        printf("Todos los bytes del buffer_ft son cero.\n");
    } else {
        printf("No todos los bytes del buffer_ft son cero.\n");
    }

    if (buffer_is_zero(buffer, sizeof(buffer)))
    {
        printf("Todos los bytes del buffer son cero.\n");
    } else {
        printf("No todos los bytes del buffer son cero.\n");
    }

    return 0;
}*/
