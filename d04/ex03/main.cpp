/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 20:53:26 by smorty            #+#    #+#             */
/*   Updated: 2019/11/23 21:54:20 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* zaz = new Character("zaz");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	zaz->equip(tmp);
	tmp = src->createMateria("cure");
	zaz->equip(tmp);
	ICharacter* bob = new Character("bob");
	zaz->use(0, *bob);
	zaz->use(1, *bob);
	zaz->use(2, *bob);
	zaz->unequip(1);
	zaz->use(1, *bob);
	zaz->equip(new Ice());
	zaz->use(1, *bob);

	AMateria *ice = new Ice();
	std::cout << "ice xp: " << ice->getXP() << std::endl;
	bob->equip(ice);
	bob->use(0, *zaz);
	bob->use(0, *zaz);
	bob->use(0, *zaz);
	bob->use(0, *zaz);
	std::cout << "ice xp: " << ice->getXP() << std::endl;
	IMateriaSource* src2 = new MateriaSource();
	src2->learnMateria(ice);
	bob->equip(src2->createMateria("ice"));
	bob->use(1, *zaz);
	bob->use(1, *zaz);
	bob->use(1, *zaz);
	bob->use(1, *zaz);
	std::cout << "ice xp: " << ice->getXP() << std::endl;
	
	delete bob;
	delete zaz;
	delete src;
	return 0;
}