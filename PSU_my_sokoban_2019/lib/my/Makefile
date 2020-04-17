##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	= ./my_atoi.c \
	../sokoban_functions/error_helper.c \
	../sokoban_functions/set_my_game.c \
	../sokoban_functions/sokoban_functions.c \
	../sokoban_functions/find.c \
	../sokoban_functions/check_win_lose.c \
	../sokoban_functions/move.c \
	../sokoban_functions/check.c \
	./my_str_to_word_array.c \
	./my_putchar.c \
	./my_putnbr.c \
	./my_putstr.c \
	./my_reval.c \
	./my_strev.c \
	./my_strlen.c

CFLAGS  = -W -Wall -g -Wextra -I./../../include/

NAME	= ./libmy.a

OBJ	= $(SRC:.c=.o)

RM	= rm -rf

all:	$(NAME)

$(NAME):$(OBJ)
	@ar rc $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
