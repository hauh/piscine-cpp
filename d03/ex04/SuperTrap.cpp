/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 18:47:21 by smorty            #+#    #+#             */
/*   Updated: 2019/11/20 22:57:37 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name)
	: ClapTrap(name, 1, 100, 100, 120, 120, 5, 60, 20), FragTrap(name), NinjaTrap(name)
{
	std::cout << "I'm the biggest thing here! [5UP3R-TP " << _name << " created]" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap &copy) : ClapTrap(copy), FragTrap(copy), NinjaTrap(copy)
{
	std::cout << "I don't need bloody saving. " << _name << " construced by copy]" << std::endl;
}

SuperTrap::~SuperTrap() {
	std::cout << "Forgive... me. [5UP3R-TP " << _name << " destroyed]" << std::endl;
}

SuperTrap	&SuperTrap::operator=(SuperTrap const & copy)
{
	ClapTrap::operator=(copy);
	std::cout << "Wooooow! This is INTENSE! [5UP3R-TP " << _name << " copied]" << std::endl;
	return (*this);
}

void	SuperTrap::rangedAttack(std::string const & target)
{
	std::cout << "You like that?! Hmm?! There's plenty more of that! [5UP3R-TP ";
	ClapTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const & target)
{
	std::cout << "Hell yeah! [5UP3R-TP ";
	ClapTrap::meleeAttack(target);
}

void	SuperTrap::takeDamage(unsigned int amount)
{
	std::cout << "No, NO! I'm deflating! I'm deflatinggg! [5UP3R-TP ";
	ClapTrap::takeDamage(amount);
}

void	SuperTrap::beRepaired(unsigned int amount)
{
	std::cout << "You see how big I am now? Woo-haaaahaaaahaaaa! [5UP3R-TP ";
	ClapTrap::beRepaired(amount);
}
