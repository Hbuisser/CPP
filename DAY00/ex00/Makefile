NAME = megaphone
SRC = megaphone.cpp
FLAGS = -Wall -Wextra -Werror
OBJS = ${SRCS:.c=.o}
RM = rm -rf
CC = clang++

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean

re : fclean all