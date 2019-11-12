/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 18:54:47 by smorty            #+#    #+#             */
/*   Updated: 2019/11/12 23:52:11 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name("[unnamed]"), _type("[unkown]") {
	std::cout << "New zombie was created." << std::endl;
}

Zombie::Zombie(std::string &name, std::string &type)
	: _name(name), _type(type)
{
	std::cout << "A zombie named " << _name << " was created." << std::endl;
}

Zombie::~Zombie() {
	std::cout << _name << " is dead (for now)." << std::endl;
}

void	Zombie::announce() const {
	std::cout << '<' << _name << " (" << _type << ")>" << "Braiiiiiiinnnssss..." << std::endl;
}
