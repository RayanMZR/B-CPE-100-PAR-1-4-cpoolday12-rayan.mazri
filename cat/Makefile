##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## day10
##

NAME	=	cat

SRC	=	cat.c

OBJ	=	$(SRC:.c=.o)

LIBFLAG	= 	-L ../lib/my/ -lmy

all	:	$(NAME)

$(NAME) :
		make -C ../lib/my
		gcc -o $(NAME) $(SRC) $(LIBFLAG)

clean	:
		rm -f $(OBJ)
		make clean -C ../lib/my

fclean	: 	clean
		rm -f $(NAME)
		make fclean -C ../lib/my

re	:	fclean all

.PHONY  :       all clean fclean re
