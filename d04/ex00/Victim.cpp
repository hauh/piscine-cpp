/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 22:33:57 by smorty            #+#    #+#             */
/*   Updated: 2019/11/21 23:25:45 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string const & name) : _name(name) {
	std::cout << "Some random victim called " << _name << " just popped !" << std::endl;
}

void	Victim::getPolymorphed() const {
	std::cout << _name << " has been turned into a cute little sheep !" << std::endl;
}

/*	Coplien	*/
Victim::Victim(Victim const & rhs) : Victim(rhs._name) {}
Victim::~Victim() {
	std::cout << "Victim " << _name << " just died for no apparent reason !" << std::endl;
}
Victim	&Victim::operator=(Victim const & rhs)
{
	if (this != &rhs)
		_name = rhs._name;
	return (*this);
}

/*	Getters	*/
std::string	const & Victim::getName() const	{ return (_name); }

std::ostream	&operator<<(std::ostream & out, Victim const & rhs)
{
	out << "I am " << rhs.getName() << ", and I like otters !" << std::endl;
	return (out);
}
