/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 21:25:48 by smorty            #+#    #+#             */
/*   Updated: 2019/11/12 22:40:14 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

std::string ZombieHorde::_rand_names[] =
	{ "Dominick", "Terra", "Mora", "Danyelle", "Veda", "Shizuko", "Akiko",
	"Yasmin", "Wilfredo", "Narcisa", "Ashli", "Rena","Babette", "Dacia",
	"Nohemi", "Fleta", "Niki", "Ivan", "Chantal", "Arlette" };

ZombieHorde::ZombieHorde() : _horde(nullptr) {}

ZombieHorde::ZombieHorde(int size) : _size(size)
{
	srand(time(nullptr));
	rand();
	std::string type = "horde";
	_horde = new Zombie *[size];
	for (int i = 0; i < size; ++i)
		_horde[i] = new Zombie(getRandomName(), type);
}

ZombieHorde::~ZombieHorde()
{
	for (int i = 0; i < _size; ++i)
		delete _horde[i];
	delete[] _horde;
}

void	ZombieHorde::announce()
{
	for (int i = 0; i < _size; ++i)
		_horde[i]->announce();
}

std::string	&ZombieHorde::getRandomName()
{
	return (_rand_names[rand() % 20]);	
}