/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrero <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 23:03:00 by ccarrero            #+#    #+#             */
/*   Updated: 2024/03/15 23:03:00 by ccarrero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str)
{
    int res;
    int sign;

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

int main (int ac, char **av)
{
    int mine;
    int theirs;
    if (ac == 2)
    {
        mine = ft_atoi(av[1]);
        theirs = atoi (av[1]);
        printf("mine: %d | theirs: %d\n", mine, theirs);
    }
    return (0);
}