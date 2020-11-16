/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebednar <ebednar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 20:50:10 by ebednar           #+#    #+#             */
/*   Updated: 2020/11/05 20:50:48 by ebednar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
