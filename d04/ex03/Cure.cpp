/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 19:03:46 by smorty            #+#    #+#             */
/*   Updated: 2019/11/23 20:35:55 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

AMateria	*Cure::clone() const	{ return(new Cure(*this)); }

/*	Coplien	*/
Cure::Cure() : AMateria("cure") {}
Cure::~Cure() {}
Cure::Cure(Cure const & copy) : AMateria("cure") { setXP(copy.getXP()); }
Cure	&Cure::operator=(Cure const & rhs)
{
	if (this != &rhs)
		setXP(rhs.getXP());
	return (*this);
}
