/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:58:03 by ccarrero          #+#    #+#             */
/*   Updated: 2024/03/22 02:03:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	unsigned char	uc;
	char			*str;

	uc = (unsigned char)c;
	str = (char *)s;
	while (*str != uc)
	{
		if (*str == '\0')
			return (NULL);
		str++;
	}
	return (str);
}
/*
int main(void)
{
    const char *str = "Hello, world!";
    int c = 'o';

    char *result = ft_strchr(str, c);

    if (result != NULL)
        printf("Caracter '%c' encontrado en la posición: %ld\n", c, result - str);
    else
        printf("Caracter '%c' no encontrado en la cadena.\n", c);

    return 0;
}*/
