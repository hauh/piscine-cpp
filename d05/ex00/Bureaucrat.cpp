/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 18:55:11 by smorty            #+#    #+#             */
/*   Updated: 2019/11/25 20:34:01 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	Bureaucrat::incrementGrade()
{
	if (--_grade < 1)
		throw GradeTooHighException();
}

void	Bureaucrat::decrementGrade()
{
	if (++_grade > 150)
		throw GradeTooLowException();
}

/*	Coplien	*/
Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(Bureaucrat const & copy)	: Bureaucrat(copy._name, copy._grade) {}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const & rhs)
{
	if (this != &rhs)
		_grade	= rhs._grade;
	return (*this);
}

/*	Getters	*/
std::string	const	&Bureaucrat::getName() const	{ return (_name); }
int					Bureaucrat::getGrade() const	{ return (_grade); }

/*	Output	*/
std::ostream	&operator<<(std::ostream &out, Bureaucrat const & obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
	return (out);
}

/*	Exceptions	*/
const char * Bureaucrat::GradeTooHighException::what() const noexcept
	{ return ("Grade is too high"); }

const char * Bureaucrat::GradeTooLowException::what() const noexcept
	{ return ("Grade is too low"); }
