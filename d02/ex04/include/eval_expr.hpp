/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 19:10:53 by smorty            #+#    #+#             */
/*   Updated: 2019/11/20 18:06:23 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		EVAL_EXPR_HPP
# define	EVAL_EXPR_HPP

# include	"Fixed.class.hpp"
# include	"OpStack.class.hpp"
# include	"Postfix.class.hpp"

# define	IS_DIGIT(c)		(c >= '0' && c <= '9')
# define	IS_OP_HIGH(c)	(c == '*' || c == '/')
# define	IS_OP_LOW(c)	(c == '+' || c == '-')

#endif
