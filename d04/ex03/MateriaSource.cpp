/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 20:42:11 by smorty            #+#    #+#             */
/*   Updated: 2019/11/23 20:54:50 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

void	MateriaSource::learnMateria(AMateria * m)
{
	if (m)
	{
		int i = 0;
		while (i < 4 && _known[i])
			++i;
		if (i < 4)
			_known[i] = m->clone();
	}
}

AMateria	*MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4 && _known[i]; ++i)
		if (_known[i]->getType() == type)
			return (_known[i]->clone());
	return (nullptr);
}

/*	Coplien	*/
MateriaSource::MateriaSource() : _known{0}	{}
MateriaSource::~MateriaSource()	{ clearKnown(); }
MateriaSource::MateriaSource(MateriaSource const & copy) { copyKnown(copy._known); }
MateriaSource	&MateriaSource::operator=(MateriaSource const & rhs)
{
	if (this != &rhs)
	{
		clearKnown();
		copyKnown(rhs._known);
	}
	return (*this);
}

/*	Private	*/
void	MateriaSource::clearKnown()
{
	delete _known[0];
	delete _known[1];
	delete _known[2];
	delete _known[3];
}

void	MateriaSource::copyKnown(AMateria * const * from)
{
	for (int i = 0; i < 4; ++i)
		_known[i] = from[i] ? from[i]->clone() : nullptr;
}
