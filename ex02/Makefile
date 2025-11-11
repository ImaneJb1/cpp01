CPP= c++
NAME= brain
CPPFLAGS= -Wall -Wextra -Werror -std=c++98
SRC=  $(shell find . -name "*.cpp")
OBJ= $(SRC:%.cpp=%.o)

all: $(NAME)

%.o : %.cpp
	@$(CPP) $(CPPFLAGS) -c $< -o $@
 
$(NAME) : $(OBJ)
	@$(CPP) $(CPPFLAGS) $(OBJ) -o $@

clean:
	@rm -f $(OBJ)

fclean : clean 
	@rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re bonus
.SECONDARY: $(OBJ)
