#include "replace.h"

int main(int argc, char *argv[])
{
	// int fd1;
	// int fd2;
	(void)argc;
	if(argc != 4)
	{
		std::cerr << ("Missing arguments\n");
		return 1;
	}
	std::string input;
	if(get_input(argv[1], input) == 0)	{
		std::cerr << "Error: could not open input file.\n";
		return 0;
	}
	std::string outfile_name = std::string(argv[1]) + ".replace";
	
	if(get_output(outfile_name, input) == 0){
		std::cerr << "Error: could not create output file.\n";
		return 0;
	}
	
	// out_file << input;
	return 0;
}
