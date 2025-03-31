##
## EPITECH PROJECT, 2024
## makefile
## File description:
## task 01
##

SRC =	lib/my_putstr.c\
    	lib/my_putchar.c\
    	lib/my_strlen.c \
    	lib/my_strcmp.c \
    	main.c \
    	my_swap.c\
		maj.c \

OBJ = $(SRC:.c=.o)

TEST_SRC =	tests/tests_anagram.c \
        	lib/my_putstr.c \
        	lib/my_putchar.c \
        	lib/my_strlen.c \
        	lib/my_strcmp.c \
        	my_swap.c \
			maj.c \

TEST_OBJ = $(TEST_SRC:.c=.o)
TEST_NAME = unit_tests

FLAGS = -Wall -Wextra -Werror -g3
CRITERION = -lcriterion --coverage

NAME = anagram

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) $(FLAGS)

clean:
	rm -f $(OBJ)
	rm -f $(TEST_OBJ)
	rm -f *.gcno
	rm -f *.gcda

fclean: clean
	rm -f $(NAME)
	rm -f $(TEST_NAME)
	rm -f lib/my/*~
	rm -f *~

re: fclean all

tests_run: $(TEST_OBJ)
	gcc -o $(TEST_NAME) $(TEST_OBJ) $(FLAGS) $(CRITERION)
	./$(TEST_NAME)
