/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 18:47:21 by smorty            #+#    #+#             */
/*   Updated: 2019/11/23 23:25:11 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 1, 100, 100, 50, 50, 3, 20, 15)
{
	std::cout << "This time it'll be awesome, I promise! [SC4V-TP " << _name << " created]" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << "Hey everybody! Check out my package! [SC4V-TP " << _name << " construced by copy]" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "I can see... the code... [SC4V-TP " << _name << " destroyed]" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const & copy)
{
	ClapTrap::operator=(copy);
	std::cout << "Glitching weirdness is a term of endearment, right? [SC4V-TP " << _name << " copied]" << std::endl;
	return (*this);
}

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "I am a tornado of death and bullets! [FR4G-TP ";
	ClapTrap::rangedAttack(target);
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "Stop me before I kill again, except don't! [FR4G-TP ";
	ClapTrap::meleeAttack(target);
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "Oh crap oh crap oh crap! [SC4V-TP ";
	ClapTrap::takeDamage(amount);
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "Good as new, I think. Am I leaking? [SC4V-TP ";
	ClapTrap::beRepaired(amount);
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
