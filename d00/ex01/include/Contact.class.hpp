/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 19:49:24 by smorty            #+#    #+#             */
/*   Updated: 2019/11/11 19:45:44 by smorty           ###   ########.fr       */
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
	std::string	m_birthday_date;
	std::string m_favorite_meal;
	std::string m_underwear_color;
	std::string	m_darkest_secret;
	int			m_id;

public:
	Contact();
	~Contact();

	void	fill_info(int id);
	void	print_less() const;
	void	print() const;

private:
	void	print_field_(const std::string &field) const;
};

# endif
