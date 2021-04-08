NAME = super

SRCS = main.cpp \
		FragTrap.cpp \
		ScavTrap.cpp \
		ClapTrap.cpp \
		NinjaTrap.cpp \
		SuperTrap.cpp

OBJS = ${SRCS:.cpp=.o}

FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
CC = clang++

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all