NAME = megaphone

SRC = megaphone.cpp
OBJS = ${SRC:.cpp=.o}

FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
CC = clang++

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

test:
	./megaphone "shhhhh... I think the students are asleep..."
	./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
	./megaphone