/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrero <ccarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:50:31 by ccarrero          #+#    #+#             */
/*   Updated: 2024/03/18 15:17:50 by ccarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	l;
	size_t	size;

	size = 0;
	l = ft_strlen(dst) + ft_strlen(src);
	if (dstsize <= ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	while (*dst)
		dst++;
	i = 0;
	while ((i < dstsize - (l - ft_strlen(src)) - 1) && src[i] && i < dstsize
		- ft_strlen(dst) - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (l);
}
/*
int	main(void)
{
	char		dst[20] = "Hello, ";
	const char	*src = "world!";
	size_t		dstsize;
	size_t		result;

	dstsize = sizeof(dst);
	result = strlcat(dst, src, dstsize);
	printf("Concatenated string: %s\n", dst);
	printf("Result: %zu\n", result);
	return (0);
}*/
