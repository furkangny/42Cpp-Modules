NAME = Serializer

CXXFLAGS = -Wall -Wextra -Werror -fsanitize=address

CC = c++

STD = -std=c++98

SRC = Serializer.cpp main.cpp

INC = Serializer.hpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CXXFLAGS) $(STD) $(OBJ) -o $(NAME)

%.o : %.cpp $(INC)
	$(CC) $(CXXFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
