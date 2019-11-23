/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 18:47:21 by smorty            #+#    #+#             */
/*   Updated: 2019/11/23 23:25:15 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name, 1, 100, 100, 100, 100, 5, 30, 20)
{
	std::cout << "Let's get this party started! [FRG4-TP " << _name << " created]" << std::endl;
}

FragTrap::FragTrap(FragTrap &copy) : ClapTrap(copy)
{
	std::cout << "Recompiling my combat code! [FRG4-TP " << _name << " construced by copy]" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "I'll die the way I lived: annoying! [FRG4-TP " << _name << " destroyed]" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const & copy)
{
	ClapTrap::operator=(copy);
	std::cout << "We're best friends! [FRG4-TP " << _name << " copied]" << std::endl;
	return (*this);
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "In yo' FACE! [FR4G-TP ";
	ClapTrap::rangedAttack(target);
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "Take that! [FR4G-TP ";
	ClapTrap::meleeAttack(target);
}

void	FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "Ow hohoho, that hurts! Yipes! [FR4G-TP ";
	ClapTrap::takeDamage(amount);
}

void	FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "Sweet life juice! [FR4G-TP ";
	ClapTrap::beRepaired(amount);
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
