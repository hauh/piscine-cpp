/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Postfix.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 19:52:38 by smorty            #+#    #+#             */
/*   Updated: 2019/11/19 22:37:32 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		POSTFIX_CLASS_HPP
# define	POSTFIX_CLASS_HPP

#include	"Fixed.class.hpp"

# define	TYPE_NUM	0
# define	TYPE_OP		1

struct	s_postfix
{
	int			type;
	Fixed		*num;
	char		op;
	s_postfix	*next;
	s_postfix	*prev;
};

class	Postfix
{
private:
	s_postfix	*_start;
	s_postfix	*_end;

public:
	Postfix();
	~Postfix();
	
	void		add(Fixed *number);
	void		add(char op);
	Fixed		solve(void);
	bool		isSolvable(void) const;
	void		printExpression(void) const;

private:
	void		addNewelem(s_postfix *newelem);
	Fixed		*calculate(Fixed *a, Fixed *b, char op);
};

#endif
