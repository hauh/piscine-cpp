/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 23:06:52 by smorty            #+#    #+#             */
/*   Updated: 2019/11/12 23:49:57 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() : _brain(new Brain), _name("[not named yet]"), _age(0)
{
	std::cout << "a human was born." << std::endl;
}

Human::Human(std::string name, int age)
	: _brain(new Brain), _name(name), _age(age)
{
	std::cout << "A human was born." << std::endl;
}
	
Human::~Human()
{
	std::cout << "A human is dead..." << std::endl;
	delete _brain;
}

std::string			Human::identify() { return (_brain->identify()); }

Brain				&Human::getBrain() const	{ return (*_brain); }
const std::string	&Human::getName() const		{ return (_name); }
int					Human::getAge() const		{ return (_age); }

void	Human::growUp()						{ ++_age; }
void	Human::rename(std::string new_name)	{ _name = new_name; }
