/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 21:56:06 by smorty            #+#    #+#             */
/*   Updated: 2019/11/25 23:29:30 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

void	PresidentialPardonForm::actuallyExecute() const
{
	std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

/*	Coplien	*/
PresidentialPardonForm::PresidentialPardonForm(std::string const & target)
	: Form("Presidential Pardon Form", target, 25, 5) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & copy)
	: Form(copy.getName(), copy.getTarget(), copy.getGradeToSign(), copy.getGradeToExecute()) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	if (this != &rhs)
		setTarget(rhs.getTarget());
	return (*this);
}
