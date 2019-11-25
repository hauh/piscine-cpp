/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 19:15:13 by smorty            #+#    #+#             */
/*   Updated: 2019/11/25 20:12:05 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
	try
	{
		static int mode = 0;

		Bureaucrat	*b1 = new Bureaucrat("Best", 1);
		Bureaucrat	*b2 = new Bureaucrat("Worst", 150);

		++mode;
		if (mode == 1)
		{
			std::cout << *b1;
			std::cout << *b2;
			std::cout << "Best + 1: ";
			b1->incrementGrade();
		}
		else if (mode == 2)
		{
			std::cout << "Worst - 1: ";
			b2->decrementGrade();
		}
		else if (mode == 3)
		{
			std::cout << "New grade 0: ";
			Bureaucrat *fail = new Bureaucrat("NULL", 0);
			delete fail;
		}
		else if (mode == 4)
		{
			std::cout << "New grade 151: ";
			Bureaucrat *fail = new Bureaucrat("NULL", 151);
			delete fail;
		}
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << '\n';
		main();
	}
}
