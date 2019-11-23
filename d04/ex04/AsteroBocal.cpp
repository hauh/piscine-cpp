/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AsteroBocal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 22:34:33 by smorty            #+#    #+#             */
/*   Updated: 2019/11/23 23:16:49 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AsteroBocal.hpp"

std::string	AsteroBocal::beMined(DeepCoreMiner *) const	{ return ("Thorite"); }
std::string	AsteroBocal::beMined(StripMiner *) const	{ return ("Flavium"); }

/*	Coplien	*/
AsteroBocal::AsteroBocal() : _name("AsteroBocal") {}
AsteroBocal::~AsteroBocal() {}
AsteroBocal::AsteroBocal(AsteroBocal const & copy) : _name("AsteroBocal")	{ (void)copy; }
AsteroBocal	&AsteroBocal::operator=(AsteroBocal const & rhs)
{
	(void)rhs;
	return (*this);
}

/*	Getters	*/
std::string	AsteroBocal::getName() const	{ return (_name); }
