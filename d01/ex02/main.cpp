/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 19:48:41 by smorty            #+#    #+#             */
/*   Updated: 2019/11/12 20:07:24 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <random>
#include <ctime>

std::string	&getRandomName(void) {
	return (ZombieEvent::rand_names[rand() % 20]);
}

Zombie		*randomChump(ZombieEvent &z_event)
{
	Zombie *randomZombie = z_event.newZombie(getRandomName());
	randomZombie->announce();
	return (randomZombie);
}

int		main()
{
	srand(time(nullptr));
	rand();

	std::string type = "fast";
	ZombieEvent z_event;
	z_event.setZombieType(type);
	for (int i = 0; i < 10; ++i)
		delete randomChump(z_event);

	type = "slow";
	z_event.setZombieType(type);
	for (int i = 0; i < 10; ++i)
		delete randomChump(z_event);
}
