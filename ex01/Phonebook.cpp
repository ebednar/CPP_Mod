#include "Phonebook.hpp"

void Phonebook::AddContact()
{
	if (index >= 8)
	{
		std::cout << "Your phonebook is full, can not add any more contacts, sorry" << std::endl;
		return ;
	}
	contacts[index].setInfo();
	std::cout << "New contact added!" << std::endl;
	index++;
}

void Phonebook::DisplayAll()
{
	int i;
	for (i = 0; i < index; ++i)
	{
		contacts[i].DisplayShortContact();
	}
}

void Phonebook::SearchContact()
{
	if (index == 0)
	{
		std::cout << "There is no any contact yet" << std::endl;
		return ;
	}
	DisplayAll();
	int i;
	std::cout << "Enter contact index: ";
	std::cin >> i;
	std::cout << std::endl;
	if (i < 0 || i >= index)
	{
		std::cout << "Invalid contact index";
	}
}