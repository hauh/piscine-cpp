/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 20:26:33 by smorty            #+#    #+#             */
/*   Updated: 2019/11/25 21:35:21 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

void	Form::beSigned(Bureaucrat const & hermes)
{
	if (hermes.getGrade() > _grade_to_sign)
		throw GradeTooLowException();
	_signed = true;
}

/*	Coplien	*/
Form::Form(std::string const & name, int grade_to_sign, int grade_to_execute)
	: _name(name), _signed(false), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute)
{
	if (grade_to_sign > 150 || grade_to_execute > 150)
		throw GradeTooLowException();
	else if (grade_to_sign < 1 || grade_to_execute < 1)
		throw GradeTooHighException();
}

Form::~Form() {}

Form::Form(Form const & copy) : Form(copy._name, copy._grade_to_sign, copy._grade_to_execute) {}

/*	Getters	*/
bool				Form::isSigned() const			{ return (_signed); }
std::string	const	&Form::getName() const			{ return (_name); }
int					Form::getGradeToSign() const	{ return (_grade_to_sign); }
int					Form::getGradeToExecute() const	{ return (_grade_to_execute); }

/*	Exceptions	*/
const char *	Form::GradeTooHighException::what() const noexcept {
	return ("Grade is too high"); }

const char *	Form::GradeTooLowException::what() const noexcept {
	return ("Grade is too low"); }

/*	Output	*/
std::ostream	&operator<<(std::ostream &out, Form const & obj)
{
	out << "The form \"" << obj.getName() << (obj.isSigned() ? "\" is signed." : "\" is unsigned.") << std::endl;
	out << "\tGrade required to sign: " << obj.getGradeToSign() << std::endl;
	out << "\tGrade required to execute: " << obj.getGradeToExecute() << std::endl;
	return (out);
}
