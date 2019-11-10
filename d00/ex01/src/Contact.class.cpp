/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 19:49:08 by smorty            #+#    #+#             */
/*   Updated: 2019/11/10 21:57:54 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact()
{
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
	std::cout << "Enter Birthday Date [DD.MM.YY]: ";
	std::cin >> std::get_time(&m_birthday_date, "%d.%m.%y");
	std::cout << "Enter Underwear Color: ";
	std::cin >> m_underwear_color;
	std::cout << "Enter Darkest Secret: ";
	std::cin >> m_darkest_secret;
}

Contact::~Contact() {
	std::cout << "Contact deleted" << std::endl;
}

void	Contact::print() const
{
	std::cout << "First Name:\t" << m_first_name << std::endl;
	std::cout << "Last Name:\t" << m_last_name << std::endl;
	std::cout << "Nickname:\t" << m_nickname << std::endl;
	std::cout << "Login:\t" << m_login << std::endl;
	std::cout << "Postal Address:\t" << m_postal_address << std::endl;
	std::cout << "Email Address:\t" << m_email_address << std::endl;
	std::cout << "Phone Number:\t" << m_phone_number << std::endl;
	std::cout << "Birthday Date:\t" << std::put_time(&m_birthday_date, "%d.%m.%Y") << std::endl;
	std::cout << "Underwear Color:\t" << m_underwear_color << std::endl;
	std::cout << "Darkest Secret:\t" << m_darkest_secret << std::endl;
}

const std::string	&Contact::getFirstName() const {
	return (m_first_name);
}

const std::string	&Contact::getLastName() const {
	return (m_last_name);
}

const std::string	&Contact::getNickname() const {
	return (m_nickname);
}

const std::string	&Contact::getLogin() const {
	return (m_login);
}

const std::string	&Contact::getPostalAddress() const {
	return (m_postal_address);
}

const std::string	&Contact::getEmailAddress() const {
	return (m_email_address);
}

const std::string	&Contact::getPhoneNumber() const {
	return (m_phone_number);
}

const std::tm		&Contact::getBirthdayDate() const {
	return (m_birthday_date);
}

const std::string	&Contact::getFavoriteMeal() const {
	return (m_favorite_meal);
}

const std::string	&Contact::getUnderwearColor() const {
	return (m_underwear_color);
}

const std::string	&Contact::getDarkestSecret() const {
	return (m_darkest_secret);
}
