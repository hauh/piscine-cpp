/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 18:47:21 by smorty            #+#    #+#             */
/*   Updated: 2019/11/20 21:08:35 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
	: _name(name), _level(1), _hp(100), _max_hp(100), _ep(100), _max_ep(100),
		_armor(5), _melee_dmg(30), _ranged_dmg(20)
{
	std::cout << "Let's get this party started! [FRG4-TP " << _name << " created]" << std::endl;
}

FragTrap::FragTrap(FragTrap &copy)
	: _name(copy._name), _level(copy._level), _hp(copy._hp), _max_hp(copy._max_hp),
		_ep(copy._ep), _max_ep(copy._max_ep), _armor(copy._armor),
		_melee_dmg(copy._melee_dmg), _ranged_dmg(copy._ranged_dmg)
{
	std::cout << "Recompiling my combat code! [FRG4-TP " << _name << " construced by copy]" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "I'll die the way I lived: annoying! [FRG4-TP " << _name << " destroyed]" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const & copy)
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
	std::cout << "We're best friends! [FRG4-TP " << _name << " copied]" << std::endl;
	return (*this);
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "In yo' FACE! [FR4G-TP " << _name << " attacks " << target
		<< " at range, causing " << _ranged_dmg << " points of damage]" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "Take that! [FR4G-TP " << _name << " melee attacks " << target
		<< ", causing " << _melee_dmg << " points of damage]" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (amount > static_cast<unsigned int>(_armor))
		if ((_hp -= amount - _armor) < 1)
			_hp = 1;
	std::cout << "Ow hohoho, that hurts! Yipes! [FR4G-TP " << _name << " takes " << amount
		<< " of damage, reduced by " << _armor << " armor, and is now at " << _hp << " health]" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if ((_hp += amount) > _max_hp)
		_hp = _max_hp;
	std::cout << "Sweet life juice! [FR4G-TP " << _name << " repaired " << amount
		<< " health, and is now at " << _hp << " health]" << std::endl;
}

std::string FragTrap::_random_attacks[] =
	{"Eat bomb, baddie! [Throwing grenade]",
	"Frozen and doh-zen! [Freezing attack]",
	"Burn, baby, burn! [Incendiary attack]",
	"Time to melt some faces! [Corrosive attack]",
	"Da, da da da! It's electric! [Shocking attack]",
	"Now with extra kapow! [Explosive attack]"};

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::cout << _name << ": ";
	if (_ep > 25)
	{
    	std::random_device rd;
    	std::mt19937 mt(rd());
    	std::uniform_int_distribution<> dist(0, 5);

		std::cout << _random_attacks[dist(mt)] << " at " << target << std::endl;
		_ep -= 25;
	}
	else
		std::cout << "Aww! [No energy]" << std::endl;
}

std::string	const	&FragTrap::getName() const			{ return (_name); }
int					FragTrap::getMeleeDamage() const	{ return (_melee_dmg); }
int					FragTrap::getRangedDamage() const	{ return (_ranged_dmg); }
