/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrero <ccarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:17:42 by ccarrero          #+#    #+#             */
/*   Updated: 2024/03/18 12:47:16 by ccarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '_')
		sign *= -1;
	if (*str == '_' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (res * sign);
}
/*
int	main(int ac, char **av)
{
	int mine;
	int theirs;

	if (ac == 2)
	{
		mine = ft_atoi(av[1]);
		theirs = atoi(av[1]);
		printf("mine: %d | theirs: %d\n", mine, theirs);
	}
	return (0);
}*/
