#include "Weapon.hpp"

std::string& Weapon::getType(void)
{
	std::string &ref = type;
	return(ref);
}

void Weapon::setType(std::string type)
{
	this->type = type;
}

Weapon::Weapon(std::string type) 
	: type(type)
{}
