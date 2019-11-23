/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 22:55:50 by smorty            #+#    #+#             */
/*   Updated: 2019/11/23 23:20:11 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BocalSteroid.hpp"
#include "AsteroBocal.hpp"
#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"
#include "MiningBarge.hpp"

int	main()
{
	MiningBarge		*barge	= new MiningBarge("smorty");
	IMiningLaser	*deep	= new DeepCoreMiner();
	IMiningLaser	*strip	= new StripMiner();
	IAsteroid		*ab		= new AsteroBocal();
	IAsteroid		*bs		= new BocalSteroid();

	std::cout << ab->getName() << std::endl;
	std::cout << bs->getName() << std::endl;

	barge->mine(ab);
	barge->mine(bs);
		std::cout << std::endl;

	barge->equip(deep);
	barge->mine(ab);
	barge->mine(bs);
		std::cout << std::endl;

	barge->equip(strip);
	barge->equip(strip);	//	cannot equip same laser twice
	barge->mine(ab);
	barge->mine(bs);
		std::cout << std::endl;

	barge->equip(new DeepCoreMiner());
	barge->equip(new StripMiner());
	barge->equip(new DeepCoreMiner());	//	too many lasers
	barge->mine(ab);
	barge->mine(bs);
		std::cout << std::endl;

	return (0);
}
