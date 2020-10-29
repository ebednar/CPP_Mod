#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
private:
	std::string Contact::fields[11] = {
		"First Name",
		"Last Name",
		"Nickname",
		"Login",
		"Address",
		"E-mail",
		"Phone",
		"Birthday",
		"Favorite Meal",
		"Underwear Color",
		"Darkest Secret"
	};
public:
	void SetInfo();
	void DisplayContact();
	void DisplayShortCOntact();
private:
	std::string info[11];
}

#endif