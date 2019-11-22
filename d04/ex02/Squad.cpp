/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 21:13:37 by smorty            #+#    #+#             */
/*   Updated: 2019/11/23 00:28:52 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

int	Squad::push(ISpaceMarine * unit)
{
	if (!unit)
		return (_count);

	for (int i = 0; i < _count; ++i)
		if (_units[i] == unit)
			return (_count);

	ISpaceMarine **resize = new ISpaceMarine *[_count + 1];
	for (int i = 0; i < _count; ++i)
		resize[i] = _units[i]; 
	resize[_count] = unit;
	++_count;
	delete[] _units;
	_units = resize;
	return (_count);
}

ISquad	*Squad::clone() const {
	return (new Squad(*this));	
}

/*	Coplien	*/
Squad::Squad() : _units(nullptr), _count(0) {};

Squad::~Squad()	{ killAll(); }

Squad::Squad(Squad const & copy)
	: _units (new ISpaceMarine *[copy._count]),  _count(copy._count)
{
	cloneAll(copy._units);
}

Squad	&Squad::operator=(Squad const & rhs)
{
	if (this != &rhs)
	{
		killAll();
		_count = rhs._count;
		_units = new ISpaceMarine *[_count];
		cloneAll(rhs._units);
	}
	return (*this);
}

/*	Getters	*/
int				Squad::getCount() const	{ return (_count); }

ISpaceMarine	*Squad::getUnit(int n) const
{
	if (n >= _count || n < 0)
		return (nullptr);
	return (_units[n]);
}

/*	Private	*/
void	Squad::killAll()
{
	for (int i = 0; i < _count; ++i)
		delete (_units[i]);
	delete[] (_units);
}

void	Squad::cloneAll(ISpaceMarine **from)
{
	for (int i = 0; i < _count; ++i)
		_units[i] = from[i]->clone(); 
}
