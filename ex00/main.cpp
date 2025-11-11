#include "Zombie.hpp"

int main(void)
{
	Zombie *heapZombie = newZombie("Houda");
	heapZombie->announce();
	delete heapZombie;
	randomChump("stackzombie");
	return 0;
}
