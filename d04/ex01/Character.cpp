/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 19:47:58 by smorty            #+#    #+#             */
/*   Updated: 2019/11/22 20:40:42 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

void	Character::equip(AWeapon const * weapon) {
	_weapon = weapon;
}

void	Character::attack(Enemy * en)
{
	if (en && _weapon && _weapon->getAPCost() <= _ap)
	{
		_ap -= _weapon->getAPCost();
		_weapon->attack();
		en->takeDamage(_weapon->getDamage());
		if (en->getHP() <= 0)
			delete (en);
	}
}

void	Character::recoverAP()
{
	if ((_ap += 10) > 40)
		_ap = 40;
}

/*	Coplien	*/
Character::Character(std::string const & name) : _name(name), _ap(40), _weapon(nullptr) {}

Character::~Character() {}

Character::Character(Character const & copy)
	: _name(copy._name), _ap(copy._ap), _weapon(copy._weapon) {}

Character	&Character::operator=(Character const & rhs)
{
	if (this != &rhs)
	{
		_name	= rhs._name;
		_ap		= rhs._ap;
		_weapon	= rhs._weapon;
	}
	return (*this);
}

/*	Getters	*/
std::string const &	Character::getName() const		{ return (_name); }
int					Character::getAP() const		{ return (_ap); }
AWeapon const *		Character::getWeapon() const	{ return (_weapon); }

/*	Cout	*/
std::ostream	&operator<<(std::ostream & out, Character const & obj)
{
	out << obj.getName() << " has " << obj.getAP() << " AP and ";
	if (obj.getWeapon())
		out << "wields a " << obj.getWeapon()->getName() << std::endl;
	else
		out << "is unarmed" << std::endl;
	return (out);
}
