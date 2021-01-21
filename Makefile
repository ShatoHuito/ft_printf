.PHONY: NAME GCC INCL CFLAGS SRC OBJ all clean fclean re

NAME	= libftprintf.a
CC		= gcc
INCL    = ./
CFLAGS	= -Wall -Wextra -Werror -I $(INCL) -c

SRC 	= libftprintf.c \
		  char.c \
		  string.c \
		  int_dec.c \
		  unsigned.c \
		  x_X.c \
		  sct_inic.c \

OBJ		= $(SRC:.c=.o)

all:	$(NAME)

$(NAME): compile_lib $(OBJ)
		ar rc $(NAME) $(OBJ) ./libft/*.o
		ranlib $(NAME)

compile_lib:
			make -C ./libft/

clean:
	rm -f $(OBJ)
	make clean -C ./libft/

fclean: clean
		make fclean -C ./libft/
		rm -f $(NAME)

re: fclean all
