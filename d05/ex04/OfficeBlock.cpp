/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 18:36:33 by smorty            #+#    #+#             */
/*   Updated: 2019/11/26 19:22:32 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

void	OfficeBlock::doBureaucracy(std::string const & form, std::string const & target) const
{
	try
	{
		if (!_signer || !_executor || !_intern)
			throw NonFunctionalOfficeException();
	
		Form *task = _intern->makeForm(form, target);
		_signer->signForm(*task);
		_executor->executeForm(*task);
		std::cout << "Bureaucracy was done succefully" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Bureaucracy failed because: " << e.what() << std::endl;
	}
}

OfficeBlock::OfficeBlock(Bureaucrat * signer, Bureaucrat * executor, Intern * intern)
	: _signer(signer), _executor(executor), _intern(intern) {}

/*	Coplien	*/
OfficeBlock::OfficeBlock() : _signer(nullptr), _executor(nullptr), _intern(nullptr) {}
OfficeBlock::~OfficeBlock() {}

/*	setters	*/
void	OfficeBlock::setSigner(Bureaucrat * signer)		{ _signer = signer; }
void	OfficeBlock::setExecutor(Bureaucrat * executor)	{ _executor = executor; }
void	OfficeBlock::setIntern(Intern * intern)			{ _intern = intern; }

/*	Exceptions	*/
const char *OfficeBlock::NonFunctionalOfficeException::what() const noexcept {
	return ("There is not enough personnel");
}
