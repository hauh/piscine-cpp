/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 00:34:53 by smorty            #+#    #+#             */
/*   Updated: 2019/11/22 20:22:22 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

/*	Coplien */
RadScorpion::RadScorpion() : Enemy("RadScorpion", 80) {
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const & copy) : Enemy(copy) {
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion() {
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion	&RadScorpion::operator=(RadScorpion const & copy)
{
	if (this != &copy)
		Enemy::operator=(copy);
	return (*this);
}
