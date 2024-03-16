/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 01:05:09 by marvin            #+#    #+#             */
/*   Updated: 2024/03/16 01:05:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*buffer;

	buffer = (void *)malloc(size * n);
	if (!buffer)
		return (NULL);
	ft_bzero(buffer, size * n);
	return (buffer);
}