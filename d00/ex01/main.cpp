#include "Phonebook.hpp"

int main(void)
{
	bool		running;
	std::string	command;
	Phonebook	book;
	
	running = true;
	while (running)
	{
		std::cout << "Enter command (ADD/SEARCH/EXIT): ";
		std::cin >> command;
		if (command == "EXIT")
			running = false;
		else if (command == "ADD")
		{
			book.AddContact();
		}
		else if (command == "SEARCH")
		{
			book.SearchContact();
		}
	}
	return 0;
}
