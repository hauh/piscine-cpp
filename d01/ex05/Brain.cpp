/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 22:47:17 by smorty            #+#    #+#             */
/*   Updated: 2019/11/12 23:49:32 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() : _size(20), _iq(100)
{
	std::cout << "With a brain (hopefully) ";
}

Brain::Brain(int size, int iq) : _size(size), _iq(iq)
{
	std::cout << "With a brain (hopefully)." << std::endl; 
}

Brain::~Brain() {
	std::cout << "As well as the brain." << std::endl;
}

std::string	Brain::identify() const
{
	std::ostringstream sstream;
	sstream << this;
	std::string address = sstream.str();
	return (address);
}

int	Brain::getSize() const	{ return (_size); }
int	Brain::getIQ() const	{ return (_iq); }

void	Brain::setSize(int size)	{ _size = size; }
void	Brain::setIQ(int iq)		{ _iq = iq; }
