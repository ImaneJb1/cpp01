CPP = c++
FLAGS = -Wall -Wextra -Werror
NAME = replace
SRC =  $(shell find . -name "*.cpp")
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

re : fclean make

.PHONY : all clean fclean re
.SECONDARY : $(OBJ)