/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 22:59:42 by smorty            #+#    #+#             */
/*   Updated: 2019/11/21 23:31:06 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string const & name) : Victim(name) {
	std::cout << "Zog zog" << std::endl;
}

void	Peon::getPolymorphed() const
{
	std::cout << _name << " has been turned into a pink pony !" << std::endl;
}

/*	Coplien	*/
Peon::Peon(Peon const & rhs) : Victim(rhs) {}
Peon::~Peon() {
	std::cout << "Bleuark..." << std::endl;
}
Peon	&Peon::operator=(Peon const & rhs)
{
	if (this != &rhs)
		_name = rhs._name;
	return (*this);
}
