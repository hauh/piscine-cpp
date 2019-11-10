/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 19:49:24 by smorty            #+#    #+#             */
/*   Updated: 2019/11/10 21:54:20 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		CONTACT_CLASS_HPP
# define	CONTACT_CLASS_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Contact
{
private:
	std::string	m_first_name;
	std::string	m_last_name;
	std::string	m_nickname;
	std::string	m_login;
	std::string	m_postal_address;
	std::string	m_email_address;
	std::string	m_phone_number;
	std::tm		m_birthday_date;
	std::string m_favorite_meal;
	std::string m_underwear_color;
	std::string	m_darkest_secret;	

public:
	Contact();
	~Contact();
	
	void	print() const;

	const std::string	&getFirstName() const;
	const std::string	&getLastName() const;
	const std::string	&getNickname() const;
	const std::string	&getLogin() const;
	const std::string	&getPostalAddress() const;
	const std::string	&getEmailAddress() const;
	const std::string	&getPhoneNumber() const;
	const std::tm		&getBirthdayDate() const;
	const std::string	&getFavoriteMeal() const;
	const std::string	&getUnderwearColor() const;
	const std::string	&getDarkestSecret() const;
};

# endif
