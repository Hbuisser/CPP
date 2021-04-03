NAME = megaphone

SRC = megaphone.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = ${SRCS:.c=.o}
RM = rm -rf
CC = clang++

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all