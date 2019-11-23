/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 22:10:00 by smorty            #+#    #+#             */
/*   Updated: 2019/11/23 23:19:01 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StripMiner.hpp"

void	StripMiner::mine(IAsteroid * asteroid) {
	std::cout << "* strip mining ... got " << asteroid->beMined(this) << "! *" << std::endl;
}

/*	Coplien	*/
StripMiner::StripMiner() {}
StripMiner::~StripMiner() {}
StripMiner::StripMiner(StripMiner const &) {}
StripMiner	&StripMiner::operator=(StripMiner const &)	{ return (*this); }
