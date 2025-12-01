#include "Harl.hpp"

int main()
{
	Harl object;

	object.complain("DEBUG");
	object.complain("ERROR");
	object.complain("INFO");
	object.complain("WARNING");
	return 0;
}
