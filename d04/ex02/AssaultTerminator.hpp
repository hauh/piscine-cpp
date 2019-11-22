/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 21:09:09 by smorty            #+#    #+#             */
/*   Updated: 2019/11/22 23:04:41 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ASSAULTTERMINATOR_HPP
# define	ASSAULTTERMINATOR_HPP

#include	<iostream>
#include	"ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
public:
	AssaultTerminator();
	AssaultTerminator(AssaultTerminator const &);
	~AssaultTerminator();
	AssaultTerminator	&operator=(AssaultTerminator const &);

	virtual ISpaceMarine*	clone() const override;
	virtual void			battleCry() const override;
	virtual void			rangedAttack() const override;
	virtual void			meleeAttack() const override;
};

#endif
