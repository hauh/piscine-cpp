/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 18:47:21 by smorty            #+#    #+#             */
/*   Updated: 2019/11/20 22:57:37 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() {}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name, 1, 60, 60, 120, 120, 0, 60, 5)
{
	std::cout << "Viva La Robolution! [INAC-TP " << _name << " created]" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap &copy) : ClapTrap(copy)
{
	std::cout << "We are the claptraps and we are legion! " << _name << " construced by copy]" << std::endl;
}

NinjaTrap::~NinjaTrap() {
	std::cout << "Nonono! You'll never take me alive! [INAC-TP " << _name << " destroyed]" << std::endl;
}

NinjaTrap	&NinjaTrap::operator=(NinjaTrap const & copy)
{
	ClapTrap::operator=(copy);
	std::cout << "Give us open ports for remote access or give us death! [INAC-TP " << _name << " copied]" << std::endl;
	return (*this);
}

void	NinjaTrap::rangedAttack(std::string const & target)
{
	std::cout << "Shoryuken! [FR4G-TP ";
	ClapTrap::rangedAttack(target);
}

void	NinjaTrap::meleeAttack(std::string const & target)
{
	std::cout << "Punch punch! Fight! [FR4G-TP ";
	ClapTrap::meleeAttack(target);
}

void	NinjaTrap::takeDamage(unsigned int amount)
{
	std::cout << "A claptrap feels no pain- ow! Quit it! [INAC-TP ";
	ClapTrap::takeDamage(amount);
}

void	NinjaTrap::beRepaired(unsigned int amount)
{
	std::cout << "WOO! Sucks to be a fleshie! [INAC-TP ";
	ClapTrap::beRepaired(amount);
}

void	NinjaTrap::ninjaShoebox(NinjaTrap & ninja)
{
	std::cout << "Ha-ha! Your name is now DUMBASS." << std::endl;
	ninja.setName("DUMBASS");
	if (&ninja == this)
		std::cout << "Wait a second... NOOOOOO!" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap & scav)
{
	int swap = scav.getMeleeDamage();
	std::cout << "[Swaps " << scav.getName() << "'s melee and ranged weapons] Fool." << std::endl;
	scav.setMeleeDamage(scav.getRangedDamage());
	scav.setRangedDamage(swap);
}

void	NinjaTrap::ninjaShoebox(FragTrap & frag)
{
	std::cout << "Stop hurting yourself! No, actually do that right now." << std::endl;
	frag.meleeAttack(frag.getName());
	frag.takeDamage(frag.getMeleeDamage());
}
