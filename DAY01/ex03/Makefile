NAME = zombie

SRCS = main.cpp \
		Zombie.cpp \
		ZombieHorde.cpp 
		
OBJS = ${SRCS:.cpp=.o}

FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
CC = clang++

all : $(NAME)

$(NAME) : 
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all