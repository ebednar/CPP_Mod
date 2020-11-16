/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebednar <ebednar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 20:50:13 by ebednar           #+#    #+#             */
/*   Updated: 2020/11/05 20:56:43 by ebednar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void Phonebook::AddContact()
{
	if (index >= 8)
	{
		std::cout << "Your phonebook is full, can not add any more contacts, sorry" << std::endl;
		return ;
	}
	contacts[index].SetInfo();
	std::cout << "New contact added!" << std::endl;
	std::cout << std::endl;
	index++;
}

void Phonebook::DisplayAll()
{
	int i;

	std::cout << "---------------------------------------------" << std::endl;
	for (i = 0; i < index; ++i)
	{
		contacts[i].DisplayShortContact(i + 1);
	}
	std::cout << "---------------------------------------------" << std::endl;
}

void Phonebook::SearchContact()
{
	int i;

	if (index == 0)
	{
		std::cout << "There is no any contact yet" << std::endl;
		return ;
	}
	DisplayAll();
	while (true)
	{
		std::cout << "Enter number of contact to search: ";
		std::cin >> i;
		if (i >= 1 && i < index + 1)
		{
			std::cout << "Contact number " << i << " info:" << std::endl;
			contacts[i - 1].DisplayContact();
			std::cout << std::endl;
			break;
		}
		else
		{
			std::cout << "Invalid number" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}
}
