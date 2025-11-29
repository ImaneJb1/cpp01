#include "replace.h"

int get_input(char *filename, std::string &content)
{
	std::ifstream in_file;

	in_file.open(filename);
	if(!in_file.is_open()){
		std::cerr << "Error: could not open input file.\n";
		return 0;
	}
	getline(in_file, content, '\0');
	return 1;
}

int get_output(std::string filename, std::string content)
{
	std::ofstream out_file;
	out_file.open(filename);
	if(!out_file.is_open()){
		std::cerr << "Error: could not create output file.\n";
		return 0;
	}
	out_file << content;
	return 1;
}
