##
## EPITECH PROJECT, 2022
## MAKEFILE
## File description:
## Makefile
##

SRC 	=	my_putchar.c \
			my_conv_flags.c \
			my_count_word.c \
			my_countchar.c \
			my_disp_flags.c \
			my_fake_flags.c \
			my_getnbr.c \
			my_printf.c \
			my_put_nbr.c \
			my_putfloat.c \
			my_putnbr_base.c \
			my_putnbr_longlong_int.c \
			my_putstr.c \
			my_sort_word_array.c \
			my_str_to_word_array.c \
			my_strcpy.c \
			my_strlen.c \
			my_strn.c \
			my_strncpy.c \
			my_swap.c \
			array_size.c \
			array_dup.c \
			my_convert_type.c \

CFLAGS += -I ../../include/

%.o:	%.c
	@gcc -c -o $@ $^ $(CFLAGS)

OBJ = 	$(SRC:.c=.o)

NAME = 	libmy.a

all: 	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	 fclean all

debug: CFLAGS += -g
debug: fclean all

auteur:
	echo $(USER) > auteur

.PHONY : all clean fclean re debug
