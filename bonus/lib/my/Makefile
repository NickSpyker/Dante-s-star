##
## EPITECH PROJECT, 2021
## sfsm
## File description:
## Makefile
##

CC			= 	gcc

CFLAGS		= 	-W -Wall -Werror -Wextra -I../../include/

LIB_SRC		= 	$(wildcard *.c)

LIB_OBJ 	= 	$(LIB_SRC:.c=.o)

TARGET_LIB	= 	libmy.a

all: $(TARGET_LIB)

$(TARGET_LIB):
	$(CC) $(CFLAGS) -c $(LIB_SRC)
	ar src $(TARGET_LIB) $(LIB_OBJ)
	cp $(TARGET_LIB) ../

clean:
	$(RM) $(LIB_OBJ)

fclean: clean
	$(RM) $(TARGET_LIB)
	$(RM) ../$(TARGET_LIB)

re : fclean all
