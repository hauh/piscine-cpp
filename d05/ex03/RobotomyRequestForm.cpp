/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 21:56:06 by smorty            #+#    #+#             */
/*   Updated: 2019/11/25 23:27:46 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

void	RobotomyRequestForm::actuallyExecute() const
{
	std::random_device rd;
   	std::mt19937 mt(rd());
   	std::uniform_int_distribution<> dist(0, 1);

	std::cout << "Bzhhhhhh... Bzhhhhhh... ";
	if (dist(mt))
		std::cout << getTarget() << " has been robotomized successfully" << std::endl;
	else
		std::cout << "Robotimization of " << getTarget() << " failed" << std::endl;
}

/*	Coplien	*/
RobotomyRequestForm::RobotomyRequestForm(std::string const & target)
	: Form("Robotomy Request Form", target, 72, 45) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & copy)
	: Form(copy.getName(), copy.getTarget(), copy.getGradeToSign(), copy.getGradeToExecute()) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	if (this != &rhs)
		setTarget(rhs.getTarget());
	return (*this);
}
