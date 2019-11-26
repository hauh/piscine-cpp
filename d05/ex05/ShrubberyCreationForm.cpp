/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 21:56:06 by smorty            #+#    #+#             */
/*   Updated: 2019/11/25 23:29:08 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

void	ShrubberyCreationForm::actuallyExecute() const
{
	std::ofstream file(getTarget() + "_shrubbery");
	if (!file)
		throw std::invalid_argument("Error opening file");
	file <<
		"               ,@@@@@@@,\n"
		"       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
		"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
		"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
		"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
		"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
		"   `&%\\ ` /%&'    |.|        \\ '|8'\n"
		"       |o|        | |         | |\n"
		"       |.|        | |         | |\n"
		"_\\__\\\\/ ._\\//_/__/ , \\\\_//__\\/ . \\_//__/_\n";
	if (file.bad())
		throw std::invalid_argument("Error writing to file");
}

/*	Coplien	*/
ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target)
	: Form("Shrubbery Creation Form", target, 145, 137) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & copy)
	: Form(copy.getName(), copy.getTarget(), copy.getGradeToSign(), copy.getGradeToExecute()) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	if (this != &rhs)
		setTarget(rhs.getTarget());
	return (*this);
}
