##
## ESGI PROJECT, 2024
## PoolProject1
## File description:
## Makefile
##

CC ?= gcc

NAME = power4

SRC = $(wildcard src/*.c) \

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra
CPPFLAGS = -iquote include

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ) $(NAME) *.gcda *.gcno

fclean: clean
	rm -rf ../$(NAME)

re: fclean all

.PHONY: all clean fclean re
