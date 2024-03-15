/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:49:12 by ccarrero          #+#    #+#             */
/*   Updated: 2024/03/15 22:58:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i]  && s1[i] == s2[i])
	{
		i++;
	return (s1[i] - s2[i])
	}
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (!*needle)
	return ((char *) haystack);
	while (*haystack && i < len)
	{
		if (ft_strcmp(haystack, needle) == 0)
		return ((char *) haystack);
		i++;
		haystack++;
	}
	return (NULL);
}

int main(void)
{
    const char *haystack = "Hello, World!";
    const char *needle = "World";
    size_t len = strlen(haystack);

    char *result = ft_strnstr(haystack, needle, len);

    if (result != NULL)
    {
        printf("'%s' encontrado en '%s' en la posición %lld\n", needle, haystack, result - haystack);
    }
    else
    {
        printf("'%s' no encontrado en '%s'\n", needle, haystack);
    }

    return 0;
}
