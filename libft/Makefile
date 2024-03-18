NAME = libft.a
GCC = gcc
FLAGS = -Wall -Wextra -Werror

SRC = ft_*.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(GCC) $(FLAGS) -c $(SRC)
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all