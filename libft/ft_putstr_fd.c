/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 01:09:55 by marvin            #+#    #+#             */
/*   Updated: 2024/03/22 01:09:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *str, int fd)
{
	while (str[0] != '\0')
	{
		write(fd, str, 1);
		str++;
	}
}
/*
int	main()
{
	ft_putstr("lets go");
	return 0;
}*/