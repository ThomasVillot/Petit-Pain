##
## EPITECH PROJECT, 2024
## makefile
## File description:
## task 01
##

SRC = lib/my_putstr.c\
      lib/my_putchar.c\
	lib/my_strlen.c \
	lib/my_strcmp.c \
	main.c \
	my_swap.c\

OBJ    =    $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror -g3

NAME = anagram

all:$(NAME)

$(NAME):    $(OBJ)
	gcc -o $(NAME) $(OBJ) $(FLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f lib/my/*~
	rm -f *~

re: fclean all
