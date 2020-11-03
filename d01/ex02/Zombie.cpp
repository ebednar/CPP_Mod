#include "Zombie.hpp"

void Zombie::announce() const
{
	std::cout << name << " (" << type << "): Braiiinnnsss..." << std::endl;
}