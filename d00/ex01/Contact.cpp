/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebednar <ebednar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 20:50:00 by ebednar           #+#    #+#             */
/*   Updated: 2020/11/05 20:52:14 by ebednar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	fields[0] = "First Name";
	fields[1] = "Last Name";
	fields[2] = "Nickname";
	fields[3] = "Login";
	fields[4] = "Address";
	fields[5] = "E-mail";
	fields[6] = "Phone";
	fields[7] = "Birthday";
	fields[8] = "Favorite Meal";
	fields[9] = "Underwear Color";
	fields[10] = "Darkest Secret";
}

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
