CPP = c++
FLAGS = -Wall -Wextra -Werror
NAME = replace
SRC =  $(shell find . -name "*.cpp")
# SRC = main.cpp open_file.cpp
OBJ = $(SRC:%.cpp=%.o)

%.o: %.cpp
	@$(CPP) $(FLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	@$(CPP) $(FLAGS) $(OBJ) -o $@

clean : 
	@rm -rf $(OBJ)

fclean : clean	
	@rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
.SECONDARY : $(OBJ)