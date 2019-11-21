/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 23:58:44 by smorty            #+#    #+#             */
/*   Updated: 2019/11/22 00:19:04 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

void	PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

/* Coplien */
PowerFist::PowerFist() : AWeapon("Power Fist", 50, 8) {}

PowerFist::PowerFist(PowerFist const & copy) : AWeapon(copy) {}

PowerFist::~PowerFist() {}

PowerFist	&PowerFist::operator=(PowerFist const & rhs)
{
	if (this != &rhs)
		AWeapon::operator=(rhs);
	return (*this);
}
