/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 23:39:38 by smorty            #+#    #+#             */
/*   Updated: 2019/11/20 18:22:12 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.hpp"

static Fixed	*aToFixed(char **expr)
{
	int sign = 1;
	int integ = 0;
	int fract = 0;
	int fract_len = 1;

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
	return (new Fixed(sign * integ + static_cast<float>(fract) / fract_len));
}

static Fixed	syntaxError(void)
{
	std::cout << "Syntax Error ";
	return (Fixed (-1));
}

static Fixed	evalExpr(char *expr)
{
	OpStack		ops;
	Postfix		expr_postfix;

	while (*expr)
	{
		if (*expr == ' ')
			++expr;
		else if (IS_DIGIT(*expr) || (*expr == '-' && IS_DIGIT(*(expr + 1))))
			expr_postfix.add(aToFixed(&expr));
		else if (IS_OP_HIGH(*expr))
		{
			while (IS_OP_HIGH(ops.peek()))
				expr_postfix.add(ops.pop());
			ops.push(*expr++);
		}
		else if (IS_OP_LOW(*expr))
		{
			while (ops.peek() && ops.peek() != '(')
				expr_postfix.add(ops.pop());
			ops.push(*expr++);
		}
		else if (*expr == '(')
			ops.push(*expr++);
		else if (*expr == ')')
		{
			while (ops.peek() && ops.peek() != '(')
				expr_postfix.add(ops.pop());
			if (ops.peek() != '(')
				return (syntaxError());
			ops.pop();
			++expr;
		}
		else
			return (syntaxError());
	}
	while (ops.peek())
		expr_postfix.add(ops.pop());
//	expr_postfix.printExpression();
	return (expr_postfix.isSolvable() ? expr_postfix.solve() : syntaxError());
}

int				main(int argc, char **argv)
{
	for (int i = 1; i < argc; ++i)
		std::cout << evalExpr(argv[i]) << std::endl;
	return (0);
}
