/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 00:12:23 by smorty            #+#    #+#             */
/*   Updated: 2019/11/22 20:51:53 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int main()
{
	Character* smorty = new Character("smorty");
	std::cout << *smorty;

	AWeapon* pr = new PlasmaRifle();
	smorty->equip(pr);
	std::cout << *smorty;

	Enemy* b = new RadScorpion();
	smorty->attack(b);
	std::cout << *smorty;
	smorty->attack(b);
	std::cout << *smorty;
	smorty->attack(b);
	std::cout << *smorty;
	smorty->attack(b);
	std::cout << *smorty;

	AWeapon* pf = new PowerFist();
	smorty->equip(pf);
	std::cout << *smorty;

	Enemy*m	= new SuperMutant();
	smorty->attack(m);
	std::cout << *smorty;
	smorty->attack(m);
	std::cout << *smorty;
	smorty->attack(m);
	std::cout << *smorty;

	smorty->recoverAP();
	std::cout << *smorty;
	smorty->recoverAP();
	std::cout << *smorty;
	smorty->recoverAP();
	std::cout << *smorty;

	smorty->attack(m);
	std::cout << *smorty;
	smorty->attack(m);
	std::cout << *smorty;

	return (0);
}
