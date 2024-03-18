/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrero <ccarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:25:26 by ccarrero          #+#    #+#             */
/*   Updated: 2024/03/18 14:26:08 by ccarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (0);
}
/*
int	main(void)
{
	char lowercase = 'h';
	char uppercase = ft_toupper(lowercase);

	printf("Lowercase: %c\nUppercase: %c\n", lowercase, uppercase);

	return (0);
}*/