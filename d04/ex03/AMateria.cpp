/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 18:52:47 by smorty            #+#    #+#             */
/*   Updated: 2019/11/23 20:35:41 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

void	AMateria::use(ICharacter & target)
{
	if (_type == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (_type == "cure")
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	_xp += 10;
}

AMateria::AMateria(std::string const & type) : _type(type), _xp(0) {}
AMateria::~AMateria() {}

/*	Getters	*/
std::string const & AMateria::getType() const	{ return (_type); }
unsigned int		AMateria::getXP() const		{ return (_xp); }

/*	Setters	*/
void	AMateria::setXP(unsigned int xp)			{ _xp = xp; }
