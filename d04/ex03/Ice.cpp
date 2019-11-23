/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 19:03:46 by smorty            #+#    #+#             */
/*   Updated: 2019/11/23 20:35:21 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

AMateria	*Ice::clone() const	{ return(new Ice(*this)); }

/*	Coplien	*/
Ice::Ice() : AMateria("ice") {}
Ice::~Ice() {}
Ice::Ice(Ice const & copy) : AMateria("ice") { setXP(copy.getXP()); }
Ice	&Ice::operator=(Ice const & rhs)
{
	if (this != &rhs)
		setXP(rhs.getXP());
	return (*this);
}
