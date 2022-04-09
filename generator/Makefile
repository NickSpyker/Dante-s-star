##
## EPITECH PROJECT, 2021
## dante
## File description:
## Makefile
##

CC			= 	gcc

CFLAGS		= 	-W -Wall -Werror -Wextra

CPPFLAGS	=	-Iinclude/

SRC 		=	generator.c \
				check_maze.c \
				is_not_valid.c \
				destroy_walls.c \
				error_handling.c \
				remove_corners.c \
				contaminates_at.c \
				create_the_grid.c \
				check_the_adjacent.c \

OBJ 		= 	$(SRC:.c=.o)

TARGET		= 	generator

all: $(TARGET)

$(TARGET): $(OBJ)
	make -C lib
	$(CC) -o $(TARGET) $(OBJ) -Llib -lgenerator
	@echo "Build OK"

clean :
	make clean -C lib
	$(RM) $(OBJ)

fclean : clean
	make fclean -C lib
	$(RM) $(TARGET)

re : fclean all
