CC= c++
CFLAGS= -Wall -Wextra -Werror -std=c++98
NAME= run
SRC= main.cpp \
	HumanA.cpp \
	HumanB.cpp \
	Weapon.cpp
	
OBJ= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.SECONDARY: $(OBJ)
.PHONY: all clean fclean re