#include "Zombie.hpp"

Zombie::Zombie(std::string name) 
{
	this->name = name;
}

Zombie::Zombie(void) {}

Zombie::~Zombie()
{
	std::cout << name << "is destroyed\n";
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

