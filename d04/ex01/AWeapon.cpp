/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 23:47:28 by smorty            #+#    #+#             */
/*   Updated: 2019/11/22 00:27:10 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

/* Coplien */
AWeapon::AWeapon(std::string const & name, int damage, int apcost)
	: _name(name), _damage(damage), _apcost(apcost) {}

AWeapon::~AWeapon() {}

AWeapon::AWeapon(AWeapon const & rhs)
	: AWeapon(rhs._name, rhs._damage, rhs._apcost) {}

AWeapon	&AWeapon::operator=(AWeapon const &rhs)
{
	if (this != &rhs)
	{
		_name	= rhs._name;
		_damage	= rhs._damage;
		_apcost	= rhs._apcost;
	}
	return (*this);
}

/*	Getters	*/
std::string const & AWeapon::getName() const	{ return (_name); }
int					AWeapon::getDamage() const	{ return (_damage); }
int					AWeapon::getAPCost() const	{ return (_apcost); }
