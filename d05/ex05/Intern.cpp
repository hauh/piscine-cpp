/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 23:42:53 by smorty            #+#    #+#             */
/*   Updated: 2019/11/26 00:01:18 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Form	*Intern::makeForm(std::string const & name, std::string const & target) const
{
	Form *form;
	if (name == "robotomy request")
		form = new RobotomyRequestForm(target);
	else if (name == "presidental pardon")
		form = new PresidentialPardonForm(target);
	else if (name == "shrubbery creation")
		form = new ShrubberyCreationForm(target);
	else
		throw UnkownFormException();
	std::cout << "Intern creates " << form->getName() << " for " << target << std::endl;
	return (form);
}

/*	Coplien	*/
Intern::Intern() {}
Intern::~Intern() {}
Intern::Intern(Intern const &) {}
Intern	&Intern::operator=(Intern const &) { return (*this); };

/*	Exceptions	*/
const char * Intern::UnkownFormException::what() const noexcept	{ return ("Unknown form name"); }
