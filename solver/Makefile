##
## EPITECH PROJECT, 2021
## dante
## File description:
## Makefile
##

CC			= 	gcc

CFLAGS		= 	-W -Wall -Werror -Wextra

CPPFLAGS	=	-Iinclude/

SRC 		=	$(wildcard *.c)

OBJ 		= 	$(SRC:.c=.o)

TARGET		= 	solver

all: $(TARGET)

$(TARGET): $(OBJ)
	make -C lib
	$(CC) -o $(TARGET) $(OBJ) -Llib -lsolver
	@echo "Build OK"

clean :
	make clean -C lib
	$(RM) $(OBJ)

fclean : clean
	make fclean -C lib
	$(RM) $(TARGET)

re : fclean all
