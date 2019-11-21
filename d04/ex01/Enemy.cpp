/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 00:21:28 by smorty            #+#    #+#             */
/*   Updated: 2019/11/22 00:33:13 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

void	Enemy::takeDamage(int damage)
{
	if (damage > 0)
		_hp -= damage;
}

/*	coplien	*/
Enemy::Enemy(std::string const & type, int hp)
	: _type(type), _hp(hp) {}

Enemy::Enemy(Enemy const & copy)
	: Enemy(copy._type, copy._hp) {}

Enemy::~Enemy() {}

Enemy	&Enemy::operator=(Enemy const & rhs)
{
	if (this != &rhs)
	{
		_type	= rhs._type;
		_hp		= rhs._hp;
	}
	return (*this);
}

/*	Getters	*/
std::string const &	Enemy::getType() const	{ return (_type); }
int					Enemy::getHP() const	{ return (_hp); }
