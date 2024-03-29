/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 23:59:28 by smorty            #+#    #+#             */
/*   Updated: 2019/11/13 00:38:17 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
	: _name(name), _weapon(nullptr) {}

void	HumanB::setWeapon(Weapon &weapon) { _weapon = &weapon; }

void	HumanB::attack() const
{
	std::cout << _name << " atacks with ";
	if (_weapon)
		std::cout << _weapon->getType() << std::endl;
	else
		std::cout << "bare fists" << std::endl;
}
