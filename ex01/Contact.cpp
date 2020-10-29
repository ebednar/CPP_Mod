#include "Contact.hpp"

void Contact::SetInfo()
{
	int i = 0;
	while (i < 11)
	{
		std::cout << "Enter " << fields[i] << ": ";
		std::cin >> info[i];
		std::cout << std::endl;
		if (info[i].Length == 0)
			std::cout << "Field can not be empty!" << std::endl;
		else
			i++;
	}
}