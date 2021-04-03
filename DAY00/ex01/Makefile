NAME = phonebook

SRCS = main.cpp \
		Phonebook.cpp \
		Contact.cpp \
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
