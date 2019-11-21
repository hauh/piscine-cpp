/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 22:19:14 by smorty            #+#    #+#             */
/*   Updated: 2019/11/21 23:25:34 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string const & name, std::string const & title)
	: _name(name), _title(title)
{
	std::cout << name << ", " << title << ", is born !" << std::endl;
}

void	Sorcerer::polymorph(Victim const & vict) const {
	vict.getPolymorphed();
}

/*	Coplien	*/
Sorcerer::Sorcerer(Sorcerer const & rhs) : Sorcerer(rhs._name, rhs._title) {}
Sorcerer::~Sorcerer() {
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same !" << std::endl;
}
Sorcerer	&Sorcerer::operator=(Sorcerer const & rhs)
{
	if (this != &rhs)
	{
		_name	= rhs._name;
		_title	= rhs._title;
	}
	return (*this);
}

/*	Getters */
std::string	const & Sorcerer::getName() const	{ return (_name); }
std::string	const & Sorcerer::getTitle() const	{ return (_title); }

std::ostream	&operator<<(std::ostream & out, Sorcerer const & rhs)
{
	out << "I am " << rhs.getName() << ", " << rhs.getTitle()
		<< ", and I like ponies !" << std::endl;
	return (out);
}
