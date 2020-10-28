#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class Phonebook
{
public:
	void AddContact();
private:
	Contact contacts[8];
	int index = 0;
}

#endif