/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMiningLaser.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 22:05:22 by smorty            #+#    #+#             */
/*   Updated: 2019/11/23 22:59:50 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		IMININGLASER_HPP
# define	IMININGLASER_HPP

# include	"IAsteroid.hpp"

class IAsteroid;

class IMiningLaser
{
public:
	virtual ~IMiningLaser() {}
	virtual void mine(IAsteroid *) = 0;
};

#endif
