/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:50:31 by ccarrero          #+#    #+#             */
/*   Updated: 2024/03/20 14:28:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;
	size_t	src_len;

	src_len = 0;
	len = 0;
	i = 0;
	while (dst[i] && i < dstsize)
	{
		i++;
		len++;
	}
	while (src[i - len] && i + 1 < dstsize)
	{
		dst[i] = src[i - len];
		i++;
	}
	if (i < dstsize)
		dst[i] = '\0';
	while (src[src_len])
		src_len++;
	return (len + src_len);
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
