/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 23:57:16 by smorty            #+#    #+#             */
/*   Updated: 2019/11/13 00:17:45 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() : _type("[unique]") {}

Weapon::Weapon(std::string type) : _type(type) {}

const std::string	&Weapon::getType() const	{ return (_type); }

void	Weapon::setType(std::string type)	{ _type = type; }
