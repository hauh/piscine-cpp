/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 19:49:08 by smorty            #+#    #+#             */
/*   Updated: 2019/11/11 20:12:15 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact() {}
Contact::~Contact() {}

void	Contact::fill_info(int id)
{
	m_id = id;
	std::cout << "Creating new contact..." << std::endl;
	std::cout << "Enter First Name: ";
	std::cin >> m_first_name;
	std::cout << "Enter Last Name: ";
	std::cin >> m_last_name;
	std::cout << "Enter Nickname: ";
	std::cin >> m_nickname;
	std::cout << "Enter Login: ";
	std::cin >> m_login;
	std::cout << "Enter Postal Address: ";
	std::cin >> m_postal_address;
	std::cout << "Enter Email Address: ";
	std::cin >> m_email_address;
	std::cout << "Enter Phone Number: ";
	std::cin >> m_phone_number;
	std::cout << "Enter Birthday Date: ";
	std::cin >> m_birthday_date;
	std::cout << "Enter Underwear Color: ";
	std::cin >> m_underwear_color;
	std::cout << "Enter Darkest Secret: ";
	std::cin >> m_darkest_secret;
}

void	Contact::print_less() const
{
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "|   Index| First N|  Last N|Nickname|" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << '|';
	std::cout.setf(std::ios_base::right);
	std::cout << std::setfill(' ') << std::setw(8) << m_id << '|';
	print_field_(m_first_name);
	print_field_(m_last_name);
	print_field_(m_nickname);
	std::cout << std::endl << "-------------------------------------" << std::endl;
}

void	Contact::print() const
{
	std::cout << std::setfill(' ') << std::setw(17) << "First Name: " << m_first_name << std::endl;
	std::cout << std::setfill(' ') << std::setw(17) << "Last Name: " << m_last_name << std::endl;
	std::cout << std::setfill(' ') << std::setw(17) << "Nickname: " << m_nickname << std::endl;
	std::cout << std::setfill(' ') << std::setw(17) << "Login: " << m_login << std::endl;
	std::cout << std::setfill(' ') << std::setw(17) << "Postal Address: " << m_postal_address << std::endl;
	std::cout << std::setfill(' ') << std::setw(17) << "Email Address: " << m_email_address << std::endl;
	std::cout << std::setfill(' ') << std::setw(17) << "Phone Number: " << m_phone_number << std::endl;
	std::cout << std::setfill(' ') << std::setw(17) << "Birthday Date: " << m_birthday_date << std::endl;
	std::cout << std::setfill(' ') << std::setw(17) << "Underwear Color: " << m_underwear_color << std::endl;
	std::cout << std::setfill(' ') << std::setw(17) << "Darkest Secret: " << m_darkest_secret << std::endl;
}

void	Contact::print_field_(const std::string &field) const
{
	std::cout << std::setfill(' ') << std::setw(8);
	if (field.size() > 8)
		std::cout << field.substr(0, 7) + '.' << '|';
	else
		std::cout << field << '|';
}
