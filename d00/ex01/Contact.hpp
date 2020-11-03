#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class Contact
{
private:
	std::string fields[11] = {
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
	void DisplayShortContact(int index);
private:
	std::string info[11];
};

#endif
