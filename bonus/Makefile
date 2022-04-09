##
## EPITECH PROJECT, 2021
## sfsm
## File description:
## Makefile
##

CC			= 	gcc

CFLAGS		= 	-g3 -W -Wall -Werror -Wextra -Wno-unused-parameter

LIBS		=	-lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-network -lcsfml-audio

CPPFLAGS	=	-Iinclude/

SRC 		=	main.c start.c update.c fill_assets.c fill_maze_walls_map.c

OBJ 		= 	$(SRC:.c=.o)

TARGET		= 	maze

all: $(TARGET)

$(TARGET): $(OBJ)
	make -C lib
	$(CC) -o $(TARGET) $(OBJ) -Llib -lm -lmy -lcsfml $(LIBS)
	@echo "Build OK"

clean :
	make clean -C lib
	$(RM) $(OBJ)

fclean : clean
	make fclean -C lib
	$(RM) $(TARGET)

re : fclean all
