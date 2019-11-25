/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 19:15:13 by smorty            #+#    #+#             */
/*   Updated: 2019/11/25 23:36:50 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat	*b1		= new Bureaucrat("High Level", 1);
	Bureaucrat	*b2		= new Bureaucrat("Low Level", 150);
	Form		*scf	= new ShrubberyCreationForm("home");
	Form		*rrf	= new RobotomyRequestForm("C3P0");
	Form		*ppf	= new PresidentialPardonForm("Criminal Scum");

	try
	{
		b1->signForm(*scf);
		b1->executeForm(*scf);
		b2->executeForm(*scf);
	}
	catch (std::exception& e) { std::cerr << e.what() << std::endl; }

	try
	{
		b1->signForm(*rrf);
		b1->executeForm(*rrf);
		b2->executeForm(*rrf);
	}
	catch (std::exception& e) { std::cerr << e.what() << std::endl; }

	try
	{
		b1->executeForm(*ppf);
	}
	catch (std::exception& e) { std::cerr << e.what() << std::endl; }

	try
	{
		b1->signForm(*ppf);
		b1->executeForm(*ppf);
		b2->executeForm(*ppf);
	}
	catch (std::exception& e) { std::cerr << e.what() << std::endl; }
}
