/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 19:39:08 by smorty            #+#    #+#             */
/*   Updated: 2019/11/12 21:19:00 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ZOMBIEEVENT_HPP
# define	ZOMBIEEVENT_HPP

#include <string>
#include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string	_type;

public:
	static std::string rand_names[];

	ZombieEvent();

	void	setZombieType(std::string &type);
	Zombie*	newZombie(std::string name);
};

#endif
