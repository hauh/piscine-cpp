/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BocalSteroid.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 22:34:33 by smorty            #+#    #+#             */
/*   Updated: 2019/11/23 23:18:53 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BocalSteroid.hpp"

std::string	BocalSteroid::beMined(DeepCoreMiner *) const	{ return ("Zazium"); }
std::string	BocalSteroid::beMined(StripMiner *) const		{ return ("Krpite"); }

/*	Coplien	*/
BocalSteroid::BocalSteroid() : _name("BocalSteroid") {}
BocalSteroid::~BocalSteroid() {}
BocalSteroid::BocalSteroid(BocalSteroid const &) : _name("BocalSteroid") {}
BocalSteroid	&BocalSteroid::operator=(BocalSteroid const &)	{ return (*this); };

/*	Getters	*/
std::string	BocalSteroid::getName() const	{ return (_name); }
