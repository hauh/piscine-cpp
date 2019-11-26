/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 19:15:13 by smorty            #+#    #+#             */
/*   Updated: 2019/11/27 00:29:38 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "CentralBureaucracy.hpp"

int main()
{
	CentralBureaucracy *sector = new CentralBureaucracy();

	// empty sector
	sector->status();
	sector->doBureaucracy();


	//queuing up targets
	for (int i = 0; i < 50; ++i)
		sector->queueUp("target" + std::to_string(i));
	//no personnel
	sector->doBureaucracy();
	sector->status();

	//hiring random bureaucrats
	std::random_device rd;
   	std::mt19937 mt(rd());
   	std::uniform_int_distribution<> dist(1, 100);
	Bureaucrat *signers[40];
	Bureaucrat *executors[40];
	for (int i = 0; i < 40; ++i)
	{
		signers[i] = new Bureaucrat("Signer" + std::to_string(i), dist(mt));
		executors[i] = new Bureaucrat("Executor" + std::to_string(i), dist(mt));
		sector->hireBureaucrat(signers[i]);
		sector->hireBureaucrat(executors[i]);
	}
	sector->doBureaucracy();
	sector->status();

	//firing weak bureaucrats
	for (int i = 0; i < 40; ++i)
	{
		if (signers[i]->getGrade() > 50)
			sector->fireBureaucrat(signers[i]);
		if (executors[i]->getGrade() > 50)
			sector->fireBureaucrat(executors[i]);
	}
	sector->status();

	//queuing up targets
	for (int i = 0; i < 50; ++i)
		sector->queueUp("target" + std::to_string(i));
	sector->status();
	sector->doBureaucracy();
	sector->status();

	//duplicate bureaucrat
	Bureaucrat *duplicate = new Bureaucrat("Doppelganger", 1);
	sector->hireBureaucrat(duplicate);
	try
	{
		sector->hireBureaucrat(duplicate);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	exit(0);
}
