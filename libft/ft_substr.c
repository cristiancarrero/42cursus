/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrero <ccarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:32:56 by ccarrero          #+#    #+#             */
/*   Updated: 2024/03/18 12:58:31 by ccarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstring;
	size_t	i;
	size_t	j;

	i = start;
	j = 0;
	newstring = (char *)malloc((len + 1) * sizeof(char));
	if (!newstring)
		return (NULL);
	while (i < (size_t)ft_strlen(s) && j < len)
		newstring[j++] = s[i++];
	newstring[j] = '\0';
	return (newstring);
}
/*
int	main(void)
{
	char	*original;

	original = "Esta es una cadena de ejemplo";
	unsigned int start = 5;
	size_t len = 10;

	char *subcadena = ft_substr(original, start, len);

	if (subcadena)
	{
		printf("Subcadena: %s\n", subcadena);
		free(subcadena);
	}
	else
	{
		printf("Error al crear la subcadena\n");
	}
	return (0);
}*/
