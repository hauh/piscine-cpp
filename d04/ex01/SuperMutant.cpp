/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 00:34:53 by smorty            #+#    #+#             */
/*   Updated: 2019/11/22 00:41:46 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

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
