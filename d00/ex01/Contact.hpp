/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebednar <ebednar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 20:50:04 by ebednar           #+#    #+#             */
/*   Updated: 2020/11/05 20:53:29 by ebednar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class Contact
{
private:
	std::string fields[11];
public:
	Contact();
	void SetInfo();
	void DisplayContact();
	void DisplayShortContact(int index);
private:
	std::string info[11];
};

#endif
