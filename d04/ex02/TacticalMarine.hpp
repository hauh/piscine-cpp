/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 21:09:09 by smorty            #+#    #+#             */
/*   Updated: 2019/11/22 23:04:29 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		TACTICALMARINE_HPP
# define	TACTICALMARINE_HPP

#include	<iostream>
#include	"ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
public:
	TacticalMarine();
	TacticalMarine(TacticalMarine const &);
	~TacticalMarine();
	TacticalMarine	&operator=(TacticalMarine const &);

	virtual ISpaceMarine*	clone() const override;
	virtual void			battleCry() const override;
	virtual void			rangedAttack() const override;
	virtual void			meleeAttack() const override;
};

#endif
