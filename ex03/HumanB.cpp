#include "HumanB.hpp"

HumanB::HumanB(std::string name)
	: name(name), weapon(NULL) {}
	
void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void	HumanB::attack(void)
{
	if(weapon != NULL)
		std::cout << name << " attacks with their " << weapon->getType() << "\n";
	else
		std::cout << name << " attacks with their bare hands " << "\n";
}
