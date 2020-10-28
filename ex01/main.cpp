#include <iostream>
#include "Phonebook.hpp"

int main(void)
{
	bool running;
	std::string command;
	Phonebook book;
	
	running = true;
	while (running)
	{
		cin >> command;
		if (command == "EXIT")
			running = false;
		else if (command = "ADD")
		{
			book.AddContact();
		}
		else if (command = "SEARCH")
		{
			
		}
	}
	return 0;
}