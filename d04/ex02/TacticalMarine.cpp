/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 21:59:42 by smorty            #+#    #+#             */
/*   Updated: 2019/11/23 23:23:04 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"TacticalMarine.hpp"

ISpaceMarine	*TacticalMarine::clone() const {
	return (new TacticalMarine(*this));
}

void	TacticalMarine::battleCry() const {
	std::cout << "For the holy PLOT !" << std::endl;
}

void	TacticalMarine::rangedAttack() const {
	std::cout << "* attacks with bolter *" << std::endl;
}

void	TacticalMarine::meleeAttack() const {
	std::cout << "* attacks with chainsword *" << std::endl;
}

/*	Coplien	*/
TacticalMarine::TacticalMarine() {
	std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &) {
	std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine::~TacticalMarine() {
	std::cout << "Aaargh ..." << std::endl;
}

TacticalMarine	&TacticalMarine::operator=(TacticalMarine const &) {
	return (*this);
}
