/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OpStack.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 18:41:00 by smorty            #+#    #+#             */
/*   Updated: 2019/11/20 00:11:47 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OpStack.class.hpp"

OpStack::OpStack() : _top(nullptr) {};

void	OpStack::push(char op)
{
	if (_top)
	{
		s_opstack *insert = new s_opstack {op, _top};
		_top = insert;
	}
	else
		_top = new s_opstack {op, nullptr};
}

char	OpStack::pop(void)
{
	if (_top)
	{
		s_opstack	*clean	= _top;
		char		op		= _top->op;
		_top = _top->next;
		delete (clean);
		return (op);
	}
	return (0);
}

char	OpStack::peek(void) const
{
	return (_top ? _top->op : 0);
}

OpStack::~OpStack()
{
	while (pop())
		;
}
