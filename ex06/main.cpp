#include "Harl.hpp"

int	get_level(std::string input)
{
	if(input == "DEBUG")
		return(1);
	else if(input == "INFO")
		return(2);
	else if(input == "WARNING")
		return(3);
	else if(input == "ERROR")
		return(4);
	else
		return(0);
}

int main(int argc, char **argv)
{
	int level;
	Harl harl;

	if(argc != 2)
		return 0;
	level = get_level(argv[1]);
	
	switch(level)
	{
		case 1:
			harl.complain("DEBUG");
		case 2:
			harl.complain("INFO");
		case 3:
			harl.complain("WARNING");
		case 4:
			harl.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return 0;
}
