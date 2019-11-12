/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 16:51:40 by smorty            #+#    #+#             */
/*   Updated: 2019/11/12 18:40:41 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.class.hpp"

Pony::Pony() : _name("[unnamed]"), _color("[undefined]"), _age(0), _weight(0) {
	std::cout << "Unnamed pony is born." << std::endl;
}

Pony::Pony(std::string &name, std::string &color, int age, int weight)
	: _name(name), _color(color), _age(age), _weight(weight)
{
	std::cout << name << " joined the herd." << std::endl;
}

Pony::~Pony() {
	std::cout << _name << " died. :(" << std::endl;
}

void	Pony::introduce() const
{
	std::cout << "Hello! My name is " << _name << ". My color is " << _color << ". I am " << _age
		<< " years old and my weight is " << _weight << " kg." << std::endl;
}

void	Pony::speak() const {
	std::cout << "I-ho-ho!" << std::endl;
}

const std::string	&Pony::getName() const	{ return (_name); }
const std::string	&Pony::getColor() const	{ return (_color); }
int					Pony::getAge() const	{ return (_age); }
int					Pony::getWeight() const	{ return (_weight); }

void	Pony::setName(std::string &name) {
	_name = name;
}

void	Pony::setColor(std::string &color) {
	_name = color;
}

void	Pony::setAge(int age) {
	_age = age;
}

void	Pony::setWeight(int weight) {
	_weight = weight;
}
