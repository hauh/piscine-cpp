/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 19:15:13 by smorty            #+#    #+#             */
/*   Updated: 2019/11/25 23:59:51 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern  someRandomIntern;
	Form*   form;

	try
	{
		form = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << *form;
		form = someRandomIntern.makeForm("presidental pardon", "Bender");
		std::cout << *form;
		form = someRandomIntern.makeForm("shrubbery creation", "Bender");
		std::cout << *form;

		form = someRandomIntern.makeForm("unknown", "Bender");
	}
	catch (std::exception &e) { std::cerr << e.what() << std::endl; }
}
