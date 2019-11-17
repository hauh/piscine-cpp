/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 20:05:45 by smorty            #+#    #+#             */
/*   Updated: 2019/11/18 00:31:05 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

static Fixed	evalExpr(char **expr);

static Fixed	aToFixed(char **expr)
{
	int sign = 1;
	int integ = 0;
	int fract = 0;
	int fract_len = 1;

	while (**expr == ' ')
		++(*expr);
	if (**expr == '(')
	{
		Fixed ret(evalExpr(&++(*expr)));
		++(*expr);
		return (ret);
	}
	if (**expr == '-')
	{
		sign *= -1;
		++(*expr);
	}
	while (**expr >= '0' && **expr <= '9')
	{
		integ = integ * 10 + (**expr - '0');
		++(*expr);
	}
	if (**expr == '.')
	{
		++(*expr);
		while (**expr >= '0' && **expr <= '9')
		{
			fract = fract * 10 + (**expr - '0');
			++(*expr);
			fract_len *= 10;
		}
	}
	return (Fixed(sign * integ + static_cast<float>(fract) / fract_len));
}

static void		highPriority(char **expr, Fixed &eval)
{
	while (**expr == '*' || **expr == '/')
	{
		char op = *(*expr)++;
		op == '*' ? eval *= aToFixed(expr) : eval /= aToFixed(expr);
		while (**expr == ' ')
			++(*expr);
	}
}

static void		lowPriority(char **expr, Fixed &eval, char op)
{
	++(*expr);
	Fixed num = aToFixed(expr);
	if (op == '-')
		num *= -1;
	eval += num + evalExpr(expr);
}

static Fixed	evalExpr(char **expr)
{
	Fixed eval = aToFixed(expr);

	while (**expr && **expr != ')')
	{
		if (**expr == '*' || **expr == '/')
			highPriority(expr, eval);
		else if (**expr == '+' || **expr == '-')
			lowPriority(expr, eval, **expr);
		else
			++(*expr);
	}
	return (eval);
}

int				main(int argc, char **argv)
{
	for (int i = 1; i < argc; ++i)
		std::cout << evalExpr(&argv[i]) << std::endl;
	return (0);
}
