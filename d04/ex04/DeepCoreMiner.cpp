/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 22:10:00 by smorty            #+#    #+#             */
/*   Updated: 2019/11/23 23:18:05 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DeepCoreMiner.hpp"

void	DeepCoreMiner::mine(IAsteroid * asteroid) {
	std::cout << "* mining deep ... got " << asteroid->beMined(this) << "! *" << std::endl;
}

/*	Coplien	*/
DeepCoreMiner::DeepCoreMiner() {}
DeepCoreMiner::~DeepCoreMiner() {}
DeepCoreMiner::DeepCoreMiner(DeepCoreMiner const &) {}
DeepCoreMiner	&DeepCoreMiner::operator=(DeepCoreMiner const &)	{ return (*this); }
