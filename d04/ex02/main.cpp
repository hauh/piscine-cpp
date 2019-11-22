/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 22:13:28 by smorty            #+#    #+#             */
/*   Updated: 2019/11/23 00:35:59 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	vlc->push(bob->clone());
	vlc->push(jim->clone());
	std::cout << std::endl;
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		std::cout << &*cur << std::endl;
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
		std::cout << std::endl;
	}

	ISpaceMarine* john(bob->clone());
	ISpaceMarine* jack = jim->clone();
	std::cout << &*john << std::endl;
	std::cout << &*jack << std::endl;
	std::cout << std::endl;

	ISquad *copy = vlc->clone();
	delete vlc;
	std::cout << std::endl;

	copy->push(john);
	copy->push(jack);
	copy->push(jack);
	copy->push(nullptr);
 	for (int i = 0; i < copy->getCount(); ++i)
 	{
 		ISpaceMarine* cur = copy->getUnit(i);
		std::cout << &*cur << std::endl;
 		cur->battleCry();
 		cur->rangedAttack();
 		cur->meleeAttack();
 		std::cout << std::endl;
 	}
	return (0);
}
