# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/22 21:17:47 by marvin            #+#    #+#              #
#    Updated: 2024/05/21 02:21:08 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_memset.c ft_bzero.c ft_strlen.c ft_atoi.c ft_isdigit.c ft_isalpha.c \
       ft_isprint.c ft_isascii.c ft_isalnum.c ft_memchr.c ft_memcpy.c ft_split.c \
       ft_memcmp.c ft_memmove.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c \
       ft_strncmp.c ft_toupper.c ft_tolower.c ft_strnstr.c ft_strrchr.c ft_calloc.c \
       ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_substr.c \
       ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_itoa.c

BONUS_SRCS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
             ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
             ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

bonus: $(BONUS_OBJS)
	@if [ ! -f "$(NAME)" ]; then \
		ar rc $(NAME) $(BONUS_OBJS); \
		ranlib $(NAME); \
	else \
		echo "$(NAME) make: Nothing to be done for 'bonus'."; \
	fi

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
