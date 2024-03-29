/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 00:34:53 by smorty            #+#    #+#             */
/*   Updated: 2019/11/22 19:37:52 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

void	SuperMutant::takeDamage(int damage) {
	Enemy::takeDamage(damage - 3);
}

/*	Coplien */
SuperMutant::SuperMutant() : Enemy("Super Mutant", 170) {
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & copy) : Enemy(copy) {
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh ..." << std::endl;
}

SuperMutant	&SuperMutant::operator=(SuperMutant const & copy)
{
	if (this != &copy)
		Enemy::operator=(copy);
	return (*this);
}
