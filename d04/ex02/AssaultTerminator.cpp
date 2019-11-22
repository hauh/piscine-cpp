/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 21:59:42 by smorty            #+#    #+#             */
/*   Updated: 2019/11/22 23:24:51 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"AssaultTerminator.hpp"

ISpaceMarine	*AssaultTerminator::clone() const {
	return (new AssaultTerminator(*this));
}

void	AssaultTerminator::battleCry() const {
	std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}

void	AssaultTerminator::rangedAttack() const {
	std::cout << "* does nothing *" << std::endl;
}

void	AssaultTerminator::meleeAttack() const {
	std::cout << "* attacks with chainfists *" << std::endl;
}

/*	Coplien	*/
AssaultTerminator::AssaultTerminator() {
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & copy) {
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator() {
	std::cout << "I’ll be back ..." << std::endl;
}

AssaultTerminator	&AssaultTerminator::operator=(AssaultTerminator const &) {
	return (*this);
}
