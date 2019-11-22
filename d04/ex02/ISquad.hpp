/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 21:05:26 by smorty            #+#    #+#             */
/*   Updated: 2019/11/23 00:33:43 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ISQUAD_HPP
# define	ISQUAD_HPP

#include	"ISpaceMarine.hpp"

class ISquad
{
public:
	virtual ~ISquad() {}

	virtual ISquad* clone() const = 0;

	virtual int getCount() const = 0;
	virtual ISpaceMarine* getUnit(int) const = 0;
	virtual int push(ISpaceMarine*) = 0;
};

#endif
