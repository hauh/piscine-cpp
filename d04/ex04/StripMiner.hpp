/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 22:07:33 by smorty            #+#    #+#             */
/*   Updated: 2019/11/23 22:21:42 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		STRIPMINER_HPP
# define	STRIPMINER_HPP

# include	<iostream>
# include	"IMiningLaser.hpp"

class StripMiner : public IMiningLaser
{
public:
	StripMiner();
	StripMiner(StripMiner const &);
	~StripMiner();
	StripMiner	&operator=(StripMiner const &);

	virtual void	mine(IAsteroid *);
};

#endif
