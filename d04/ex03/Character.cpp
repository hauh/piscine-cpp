/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 19:54:24 by smorty            #+#    #+#             */
/*   Updated: 2019/11/23 20:10:39 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

void	Character::equip(AMateria * m)
{
	if (m)
	{
		int i = 0;
		while (i < 4 && _inventory[i])
			++i;
		if (i < 4)
			_inventory[i] = m;
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		_inventory[idx] = nullptr;
}

void	Character::use(int idx, ICharacter & target)
{
	if (idx >= 0 && idx < 4 && _inventory[idx])
		_inventory[idx]->use(target);
}

/*	Coplien	*/
Character::Character(std::string const & name) : _name(name), _inventory{0} {}

Character::~Character() { cleanInventory(); }

Character::Character(Character const & copy) : _name(copy._name) {
	fillInventory(copy._inventory);
}

Character &Character::operator=(Character const & rhs)
{
	if (this != &rhs)
	{
		cleanInventory();
		fillInventory(rhs._inventory);
	}
	return (*this);
}

/*	Getters	*/
std::string const &	Character::getName() const	{ return (_name); }

/*	Private	*/
void	Character::cleanInventory()
{
	delete _inventory[0];	
	delete _inventory[1];	
	delete _inventory[2];	
	delete _inventory[3];	
}

void	Character::fillInventory(AMateria * const * from)
{
	for (int i = 0; i < 4; ++i)
		_inventory[i] = from[i] ? from[i]->clone() : nullptr;
}
