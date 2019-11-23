/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 21:48:35 by smorty            #+#    #+#             */
/*   Updated: 2019/11/23 23:25:25 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name, int level, int hp, int max_hp,
		int ep, int max_ep,	int armor, int melee_dmg, int ranged_dmg)
	: _name(name), _level(level), _hp(hp), _max_hp(max_hp), _ep(ep), _max_ep(max_ep),
		_armor(armor),	_melee_dmg(melee_dmg), _ranged_dmg(ranged_dmg)
{
	std::cout << "[ClapTrap " << _name << " constructed]" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & copy)
	: _name(copy._name), _level(copy._level), _hp(copy._hp), _max_hp(copy._max_hp),
		_ep(copy._ep), _max_ep(copy._max_ep), _armor(copy._armor),
		_melee_dmg(copy._melee_dmg), _ranged_dmg(copy._ranged_dmg)
{
	std::cout << "[ClapTrap " << _name << " constructed by copy]" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "[ClapTrap " << _name << " destroyed]" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const & copy)
{
	_name	= copy._name;
	_level	= copy._level;
	_hp		= copy._hp;
	_max_hp	= copy._max_hp;
	_ep		= copy._ep;
	_max_ep	= copy._max_ep;
	_armor	= copy._armor;
	_melee_dmg	= copy._melee_dmg;
	_ranged_dmg	= copy._ranged_dmg;
	std::cout << "[ClapTrap " << _name << " copied]" << std::endl;
	return (*this);
}

void	ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << _name << " attacks " << target << " at range, causing "
		<< _ranged_dmg << " points of damage]" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << _name << " melee attacks " << target
		<< ", causing " << _melee_dmg << " points of damage]" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > static_cast<unsigned int>(_armor))
		if ((_hp -= amount - _armor) < 1)
			_hp = 1;
	std::cout << _name << " takes " << amount << " of damage, reduced by "
		<< _armor << " armor, and is now at " << _hp << " health]" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if ((_hp += amount) > _max_hp)
		_hp = _max_hp;
	std::cout << _name << " repaired " << amount << " health, and is now at "
		<< _hp << " health]" << std::endl;
}

std::string	const	&ClapTrap::getName() const			{ return (_name); }
int					ClapTrap::getMeleeDamage() const	{ return (_melee_dmg); }
int					ClapTrap::getRangedDamage() const	{ return (_ranged_dmg); }

void	ClapTrap::setName(std::string name)		{ _name = name; }
void	ClapTrap::setMeleeDamage(int damage)	{ _melee_dmg = damage; }
void	ClapTrap::setRangedDamage(int damage)	{ _ranged_dmg = damage; }
