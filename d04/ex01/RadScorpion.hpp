/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 00:34:35 by smorty            #+#    #+#             */
/*   Updated: 2019/11/22 20:23:13 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		RADSCORPION_HPP
# define	RADSCORPION_HPP

#include	<iostream>
#include	"Enemy.hpp"

class RadScorpion : public Enemy
{
public:
	RadScorpion();
	RadScorpion(RadScorpion const &);
	~RadScorpion();
	RadScorpion &operator=(RadScorpion const &);
};

#endif
