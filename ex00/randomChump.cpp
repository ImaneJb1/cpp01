#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie my_zombie(name);
	my_zombie.announce();
}