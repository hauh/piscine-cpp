/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OpStack.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 18:41:13 by smorty            #+#    #+#             */
/*   Updated: 2019/11/19 18:55:55 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		OPSTACK_CLASS_HPP
# define	OPSTACK_CLASS_HPP

struct	s_opstack
{
	char		op;
	s_opstack	*next;
};

class	OpStack
{
private:
	s_opstack	*_top;

public:
	OpStack();

	void	push(char op);
	char	pop(void);
	char	peek(void) const;
};

#endif
