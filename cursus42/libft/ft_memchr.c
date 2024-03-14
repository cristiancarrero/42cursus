/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:10:21 by ccarrero          #+#    #+#             */
/*   Updated: 2024/03/14 12:48:09 by ccarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>
#include <stdio.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t				i;
	const unsigned char	*p;

	p = str;
	i = 0;
	if (str == NULL)
		return (NULL);
	while (i < n)
	{
		if (*p == c)
		{
			return ((void *)p);
		}
		p++;
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str[] = "Hello, World";
	char	ch = 'o';
	char	*result;

	result = ft_memchr(str, ch, sizeof(str) - 1);
	if (result != NULL)
	{
		printf("Elcaracter '%c' se encontro: %ld\n", ch, result - str);
	}
	else
	{
		printf("El caracter '%c' no se encontró en la posicion.\n", ch);
	}
	return (0);
}*/
