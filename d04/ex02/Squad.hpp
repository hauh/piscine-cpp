/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 21:10:32 by smorty            #+#    #+#             */
/*   Updated: 2019/11/23 00:33:36 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		SQUAD_HPP
# define	SQUAD_HPP

# include	"ISquad.hpp"
# include	"ISpaceMarine.hpp"

class Squad : public ISquad
{
private:
	ISpaceMarine	**_units;
	int				_count;

public:
	Squad();
	Squad(Squad const &);
	~Squad();
	Squad	&operator=(Squad const &);

	ISquad	*clone() const override;

	virtual int				push(ISpaceMarine *) override;

	virtual int 			getCount() const override;
	virtual ISpaceMarine*	getUnit(int) const override;

private:
	void	killAll();
	void	cloneAll(ISpaceMarine **from);
};

#endif
