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

void	replace(std::string &content, std::string s1, std::string s2)
{
	size_t pos = 0;
	size_t found = 0;
	(void)s2;
	while((found = content.find(s1, pos)) != std::string::npos)
	{
		content.erase(found, s1.length());
		content.insert(found, s2);
		printf(" pos = %zu\n", pos);
		pos = found + s2.length();
	}
}

int get_output(std::string filename, std::string &content, std::string s1, std::string s2)
{
	std::ofstream out_file;

	out_file.open(filename);
	if(!out_file.is_open()){
		std::cerr << "Error: could not create output file.\n";
		return 0;
	}
	replace(content, s1, s2);
	out_file << content;
	return 1;
}

