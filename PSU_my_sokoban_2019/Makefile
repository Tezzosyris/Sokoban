##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## makefile
##

SRC	=	my_sokoban.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_sokoban

CC	=	gcc -lncurses

CFLAGS	=	-W -Wall -g -Wextra -I./include/

RM	=	rm -f

all: $(NAME)

$(NAME): $(OBJ)
	make -C lib/my
	$(CC) -o $(NAME) $(OBJ) -L./lib/my -lmy

clean:
	make -C lib/my clean
	$(RM) $(OBJ)

fclean:	clean
	make -C lib/my fclean
	$(RM) $(NAME)

re:	fclean all
