NAME = PHONEBOOK
SRCS = main.cpp ClassContact.cpp
FLAGS = -Wall -Wextra -Werror
RM = rm -rf
CC = clang++

all : $(NAME)

$(NAME) : 
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean :
	$(RM) $(NAME)

fclean : clean

re : fclean all

.PHONY: clean fclean re all
