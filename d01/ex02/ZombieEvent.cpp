/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 19:38:31 by smorty            #+#    #+#             */
/*   Updated: 2019/11/12 23:52:56 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

std::string ZombieEvent::rand_names[] = { "Dominick", "Terra", "Mora", "Danyelle", "Veda", "Shizuko", "Akiko",
							"Yasmin", "Wilfredo", "Narcisa", "Ashli", "Rena","Babette", "Dacia",
							"Nohemi", "Fleta", "Niki", "Ivan", "Chantal", "Arlette" };

ZombieEvent::ZombieEvent() {}

void	ZombieEvent::setZombieType(std::string &type) {
	_type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name) {
	return (new Zombie(name, _type));
}
