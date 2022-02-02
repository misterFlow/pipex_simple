CC=cc
NAME=pipex
CFLAGS=-Wall -Wextra -Werror
OPTIONS=-c -Iheaders/
LIBFT=libft/libft.a
SRC=src/*.c
OBJ=*.o

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(CFLAGS) $(OBJ) $(LIBFT)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) $(OPTIONS) $(SRC) $(LIBFT)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
