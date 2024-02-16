##
## EPITECH PROJECT, 2022
## MAKEFILE
## File description:
## Appel de Makefile
##

SRC 	= 	SRC/main.c \

BUILD_DIR	=	build

OBJ	=	$(SRC:%.c=$(BUILD_DIR)/%.o)

NAME 	= 	terrarialike

CFLAGS += -Wall -Wextra -Iinclude -L./lib/my/ -lmy -lcsfml-window -lcsfml-system -lcsfml-graphics -lcsfml-audio

$(BUILD_DIR)/%.o: %.c
	@mkdir -p $(@D)
	@$(CC) -c $< -o $@ $(CFLAGS)

all : $(NAME)

$(NAME) : $(OBJ)
		$(MAKE) -C lib/my/
		gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	$(MAKE) -C lib/my/ clean
	rm -f $(OBJ)
fclean: clean
	rm -f lib/my/libmy.a
	rm -fr $(BUILD_DIR)
	rm -f $(NAME)

re:	 fclean all

auteur:
	echo $(USER) > auteur

debug:
	$(MAKE) -C lib/my/ debug
debug:	CFLAGS += -g
debug:	fclean $(NAME)

.PHONY: all $(NAME) clean fclean re