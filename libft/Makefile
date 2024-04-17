# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccarrero <ccarrero@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/22 21:17:47 by marvin            #+#    #+#              #
#    Updated: 2024/04/02 18:01:55 by ccarrero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
REGULAR_SRCS = $(filter-out ft_lst%,$(SRCS))
BONUS_SRCS = $(filter ft_lst%,$(SRCS))
REGULAR_OBJS = $(REGULAR_SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: $(NAME)

$(NAME): $(REGULAR_OBJS)
	ar rc $(NAME) $(REGULAR_OBJS)
	ranlib $(NAME)

bonus: $(BONUS_OBJS)
	ar rc $(NAME) $(BONUS_OBJS)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
