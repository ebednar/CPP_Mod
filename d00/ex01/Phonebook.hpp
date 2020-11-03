#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class Phonebook
{
private:
	int index = 0;
public:
	void AddContact();
	void DisplayAll();
	void SearchContact();
private:
	Contact contacts[8];
};

#endif
