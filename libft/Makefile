# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccarrero <ccarrero@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/22 21:17:47 by marvin            #+#    #+#              #
#    Updated: 2024/04/01 13:37:04 by ccarrero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
GCC = gcc
FLAGS = -Wall -Wextra -Werror

SRC = $(wildcard ft_*.c)
BONUS_SRC = $(wildcard ft_lst*.c)
OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)

bonus: $(BONUS_OBJ)
	ar -rc $(NAME) $(BONUS_OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
