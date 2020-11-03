#include "Pony.hpp"

Pony::Pony(std::string const &name = "pony")
{
	this->name = name;
	std::cout << "My name is: " << this->name << std::endl;
}

Pony::~Pony()
{
	std::cout << this->name << " destructed" << std::endl;
}

void Pony::say() const
{
	std::cout << this->name << ": Hello!" << std::endl;
}

void Pony::sleep() const
{
	std::cout << this->name << ": Zzz..." << std::endl;
}