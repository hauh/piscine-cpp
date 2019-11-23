/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 22:43:56 by smorty            #+#    #+#             */
/*   Updated: 2019/11/23 23:13:23 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MiningBarge.hpp"

void	MiningBarge::equip(IMiningLaser * laser)
{
	if (laser)
	{
		int i = 0;
		while (i < 4 && _lasers[i])
			if (_lasers[i++] == laser)
				return ;
		if (i < 4)
			_lasers[i] = laser;
	}
}

void	MiningBarge::mine(IAsteroid	* asteroid) const
{
	if (asteroid)
		for (int i = 0; i < 4; ++i)
			if (_lasers[i])
				_lasers[i]->mine(asteroid);
}

/*	Coplien	*/
MiningBarge::MiningBarge(std::string name) : _name(name), _lasers{0} {}
MiningBarge::~MiningBarge() {}
MiningBarge::MiningBarge(MiningBarge const & copy) : _name(copy._name)
{
	for (int i = 0; i < 4; ++i)
		_lasers[i] = copy._lasers[i];
}
MiningBarge	&MiningBarge::operator=(MiningBarge const & rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		for (int i = 0; i < 4; ++i)
			_lasers[i] = rhs._lasers[i];
	}
	return (*this);
}
