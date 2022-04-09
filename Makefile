##
## EPITECH PROJECT, 2021
## dante
## File description:
## Makefile
##

all:
	make -C generator
	make -C solver

clean :
	make clean -C generator
	make clean -C solver
	make clean -C bonus

fclean : clean
	make fclean -C generator
	make fclean -C solver
	make fclean -C bonus

re : fclean all
