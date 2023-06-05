##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## stumper3 Makefile
##

SRC		=	src/event_video.c\
			src/main.c\
			src/mini_game.c\
			src/collision2.c\
			src/my_putstr.c\
			src/destroyer.c\
			src/my_strcpy.c\
			src/my_put_nbr.c\
			src/my_putchar.c\
			src/loading.c\
			src/story.c\
			src/menu1.c\
			src/handle_key.c\
			src/move.c\
			src/rectangle_cr.c\
			src/menu2.c\
			src/mini_p1.c\
			src/mini_p2.c\
			src/menu_pot.c\
			src/event_pot.c\
			src/button_opt.c\
			src/drawer.c\
			src/drawer_1.c\
			src/drawer_2.c\
			src/drawer_3.c\
			src/drawer_4.c\
			src/handler.c\
			src/main2.c\
			src/parser.c\
			src/spriter.c\
			src/inventory.c\
			src/mini_p3.c\
			src/combat2.c\
			src/combat.c\
			src/help_m.c\
			src/collision.c\
			src/func_plus.c\
			src/tool.c\
			src/init.c\
			src/init1.c\
			src/conv2.c\
			src/conv1.c\
			src/init2.c\
			src/init3.c

NAME	=	my_rpg

RED = \033[0;31m
GREEN =\033[0;32m
YELLOW = \033[0;33m
BLUE = \033[0;34m
MAGENTA = \033[0;35m
CYAN = \033[0;36m
NC = \033[0m

all:	$(NAME)

$(NAME):
	@echo -e "${CYAN}"
	@cat banner.txt
	@echo -e "${NC}"
	@echo -e "${BLUE}Compiling...${NC}"
	@echo -n 'Progress: ['
	@for i in {1..30}; do \
	    echo -ne "\033[48;5;$$((i+232))m \033[0m"; \
	    sleep 0.09; \
	done
	@echo -e "]"
	@gcc $(SRC) -o $(NAME) -lcsfml-graphics -lcsfml-window -lcsfml-system \
	-lcsfml-audio -lm -g3 | while read line; do \
		echo -ne "\033[48;5;$$((RANDOM%232+1))m \033[0m"; \
	done
	@echo ''
	@echo -e "${GREEN}[✓] Compilation done.${NC}"
clean:
	@rm -f $(OBJ)
fclean: clean
	@rm -f $(NAME)
re:	fclean all
