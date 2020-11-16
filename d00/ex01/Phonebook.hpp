/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebednar <ebednar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 20:50:17 by ebednar           #+#    #+#             */
/*   Updated: 2020/11/05 20:53:14 by ebednar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class Phonebook
{
private:
	int index;
public:
	Phonebook()
	: index(0) {};
	void AddContact();
	void DisplayAll();
	void SearchContact();
private:
	Contact contacts[8];
};

#endif
