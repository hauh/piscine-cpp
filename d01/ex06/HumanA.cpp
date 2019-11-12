/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 23:59:28 by smorty            #+#    #+#             */
/*   Updated: 2019/11/13 00:35:10 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
	: _name(name), _weapon(weapon) {}

void	HumanA::setWeapon(Weapon &weapon) { _weapon = weapon; }

void	HumanA::attack() const {
	std::cout << _name << " atacks with " << _weapon.getType() << std::endl; 
}
