/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Postfix.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 19:55:13 by smorty            #+#    #+#             */
/*   Updated: 2019/11/19 23:40:01 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Postfix.class.hpp"

Postfix::Postfix() : _start(nullptr), _end(nullptr) {};

void	Postfix::add(Fixed *number)
{
	s_postfix	*newelem = new s_postfix;
	newelem->type	= TYPE_NUM;
	newelem->next	= nullptr;
	newelem->num	= number;
	addNewelem(newelem);
}

void	Postfix::add(char op)
{
	s_postfix	*newelem = new s_postfix;
	newelem->type	= TYPE_OP;
	newelem->next	= nullptr;
	newelem->op		= op;
	newelem->num	= nullptr;
	addNewelem(newelem);
}

void	Postfix::addNewelem(s_postfix *newelem)
{
	if (_end)
	{
		_end->next = newelem;
		newelem->prev = _end;
		_end = _end->next;
	}
	else
	{
		_start = newelem;
		_start->prev = nullptr;
		_end = _start;
	}
}

bool	Postfix::isSolvable(void) const
{
	s_postfix	*iterator = _start;
	int			nums = 0;
	int			ops = 0;

	while (iterator)
	{
		if (iterator->type == TYPE_NUM)
			++nums;
		else if (++ops >= nums)
			return (false);
		iterator = iterator->next;
	}
	return (nums == ops + 1);
}

void	Postfix::printExpression(void) const
{
	s_postfix *iterator = _start;

	while (iterator)
	{
		if (iterator->type == TYPE_NUM)
			std::cout << *iterator->num << ' ';
		else
			std::cout << iterator->op << ' ';
		iterator = iterator->next;
	}
	std::cout << std::endl;
}

Fixed	Postfix::solve()
{
	s_postfix *iterator = _start;
	
	if (!iterator)
		return (Fixed(0));
	while (iterator->next)
	{
		while (iterator->type == TYPE_NUM)
			iterator = iterator->next;
		s_postfix *a = iterator->prev->prev;
		s_postfix *b = iterator->prev;
		iterator->num = calculate(a->num, b->num, iterator->op);
		iterator->type = TYPE_NUM;
		if (a->prev)
		{
			a->prev->next = iterator;
			iterator->prev = a->prev;
		}
		else
			iterator->prev = nullptr;
		delete (a);
		delete (b);
	}
	Fixed ret = *iterator->num;
	delete (iterator->num);
	delete (iterator);
	_start = nullptr;
	_end = nullptr;
	return (ret);
}

Fixed	*Postfix::calculate(Fixed *a, Fixed *b, char op)
{
	Fixed *ret;
	switch (op)
	{
		case '+': ret = new Fixed(*a + *b); break;
		case '-': ret = new Fixed(*a - *b); break;
		case '*': ret = new Fixed(*a * *b); break;
		case '/': ret = new Fixed(*a / *b); break;
	}
	delete (a);
	delete (b);
	return (ret);
}

Postfix::~Postfix()
{
	while (_start != _end)
	{
		delete (_start->num);
		_start = _start->next;
		delete (_start->prev);
	}
	if (_end)
	{
		delete (_end->num);
		delete (_end);
	}
}
