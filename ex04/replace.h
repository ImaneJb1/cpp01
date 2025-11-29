#ifndef REPLACE_H
#define REPLACE_H

# include "iostream"
# include "fcntl.h"
# include "fstream"
# include "stdlib.h"

int get_input(char *filename, std::string &content);
int get_output(std::string filename, std::string content);
#endif