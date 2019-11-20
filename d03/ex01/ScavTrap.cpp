/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 18:47:21 by smorty            #+#    #+#             */
/*   Updated: 2019/11/20 21:38:19 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
	: _name(name), _level(1), _hp(100), _max_hp(100), _ep(50), _max_ep(50),
		_armor(3), _melee_dmg(20), _ranged_dmg(15)
{
	std::cout << "This time it'll be awesome, I promise! [SC4V-TP " << _name << " created]" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &copy)
	: _name(copy._name), _level(copy._level), _hp(copy._hp), _max_hp(copy._max_hp),
		_ep(copy._ep), _max_ep(copy._max_ep), _armor(copy._armor),
		_melee_dmg(copy._melee_dmg), _ranged_dmg(copy._ranged_dmg)
{
	std::cout << "Hey everybody! Check out my package! [SC4V-TP " << _name << " construced by copy]" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "I can see... the code... [SC4V-TP " << _name << " destroyed]" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const & copy)
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
	std::cout << "Glitching weirdness is a term of endearment, right? [SC4V-TP " << _name << " copied]" << std::endl;
	return (*this);
}

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "I am a tornado of death and bullets! [FR4G-TP " << _name << " attacks " << target
		<< " at range, causing " << _ranged_dmg << " points of damage]" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "Stop me before I kill again, except don't! [FR4G-TP " << _name << " melee attacks " << target
		<< ", causing " << _melee_dmg << " points of damage]" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (amount > static_cast<unsigned int>(_armor))
		if ((_hp -= amount - _armor) < 1)
			_hp = 1;
	std::cout << "Oh crap oh crap oh crap! [SC4V-TP " << _name << " takes " << amount
		<< " of damage, reduced by " << _armor << " armor, and is now at " << _hp << " health]" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if ((_hp += amount) > _max_hp)
		_hp = _max_hp;
	std::cout << "Good as new, I think. Am I leaking? [SC4V-TP " << _name << " repaired " << amount
		<< " health, and is now at " << _hp << " health]" << std::endl;
}

std::string ScavTrap::_random_challenges[] =
	{"Reach Crisis Scar", "Pick up prisms", "Kill Darksiders", "Damage the jump pad regulator",
	"Use jump pad to reach second floor", "Report to SC4V-TP", "Go to secret entrance", "Use intercom at secret entrance",
	"Reach Crisis Scar unnoticed", "Find Signal Source", "Defeat Gate Guards", "Kill RedBelly", "Turn off signal",
	"Use maintenance console", "Destroy relays", "Return to Concordia", "Meet Jack in Concordia", "Find CU5TM-TP",
	"Follow CU5TM-TP", "Defeat the Guards", "Confront the Meriff", "Get to Springs"};

void	ScavTrap::challengeNewcomer(void) const
{
   	std::random_device rd;
   	std::mt19937 mt(rd());
   	std::uniform_int_distribution<> dist(0, sizeof(_random_challenges) / sizeof(std::string) - 1);

	std::cout << "A quest for thee, my minion!" << std::endl;
	std::cout << "[Current objective] " << _random_challenges[dist(mt)] << std::endl;
}

std::string	const	&ScavTrap::getName() const			{ return (_name); }
int					ScavTrap::getMeleeDamage() const	{ return (_melee_dmg); }
int					ScavTrap::getRangedDamage() const	{ return (_ranged_dmg); }
