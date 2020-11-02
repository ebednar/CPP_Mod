#include "Contact.hpp"

void Contact::SetInfo()
{
	int i = 0;

	while (i < 11)
	{
		std::cout << "Enter " << fields[i] << ": ";
		std::cin >> info[i];
		if (info[i].length() == 0)
			std::cout << "Field can not be empty!" << std::endl;
		else
			i++;
	}
}

void Contact::DisplayShortContact(int index)
{
	std::cout << "|" << std::setw(10) << index;
	for (int i = 0; i < 3; ++i)
	{
		std::cout << "|";
		if (info[i].length() > 10)
			std::cout << this->info[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->info[i];
	}
	std::cout << "|" << std::endl;
	
}

void Contact::DisplayContact()
{
	for (int i = 0; i < 11; ++i)
		std::cout << fields[i] << ": " << info[i] << std::endl;
}
