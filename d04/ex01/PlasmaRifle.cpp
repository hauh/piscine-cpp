/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 23:58:44 by smorty            #+#    #+#             */
/*   Updated: 2019/11/22 00:18:58 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

void	PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

/* Coplien */
PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 21, 5) {}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & copy) : AWeapon(copy) {}

PlasmaRifle::~PlasmaRifle() {}

PlasmaRifle	&PlasmaRifle::operator=(PlasmaRifle const & rhs)
{
	if (this != &rhs)
		AWeapon::operator=(rhs);
	return (*this);
}
