##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	*.c

OBJ = $(SRC:.c=.o)

NAME	=	my_hunter

all:	$(NAME)

$(NAME): $(OBJ)
	gcc -Wall -Wextra -Werror -o $(NAME) $(OBJ) -lcsfml-graphics -lcsfml-system -lcsfml-audio -lcsfml-window

$(OBJ):
	gcc -Wall -Wextra -c $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
