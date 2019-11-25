/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 19:15:13 by smorty            #+#    #+#             */
/*   Updated: 2019/11/25 21:36:15 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
	Bureaucrat	*hermes = new Bureaucrat("Hermes", 100);
	Form		*illegal;

	try {
		illegal = new Form("WTF", 0, 100);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	try {
		illegal = new Form("WTF", 100, 151);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	std::cout << *hermes;

	illegal = new Form("Plan of mass destruction", 1, 1);
	std::cout << *illegal;
	hermes->signForm(*illegal);

	Form		*legal = new Form("Plan of approval", 120, 10);
	std::cout << *legal;
	hermes->signForm(*legal);
	std::cout << *legal;
}
