/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:49:12 by ccarrero          #+#    #+#             */
/*   Updated: 2024/03/14 19:09:27 by ccarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	needle_len = 0;
	while (needle[needle_len] != '\0')
		needle_len++;
	if (needle_len == 0)
		return ((char *)haystack);
	while (*haystack != '\0' && len >= needle_len)
	{
		if (ft_strcmp(haystack, needle) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}

int main()
{
    const char *haystack = "Hello, World!";
    const char *needle = "World";
    size_t len = 13; // Longitud de la cadena haystack

    char *result = ft_strnstr(haystack, needle, len);

    if (result != NULL)
    {
        printf("'%s' encontrado en '%s' en la posición %ld\n", needle, haystack, result - haystack);
    }
    else
    {
        printf("'%s' no encontrado en '%s'\n", needle, haystack);
    }

    return (0);
}
