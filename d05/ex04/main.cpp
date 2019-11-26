/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 19:15:13 by smorty            #+#    #+#             */
/*   Updated: 2019/11/26 19:30:15 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "OfficeBlock.hpp"
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat	*signer		= new Bureaucrat("Signing bureaucrat", 1);
	Bureaucrat	*executor	= new Bureaucrat("Executing bureaucrat", 1);
	Bureaucrat	*bad		= new Bureaucrat("Unqualified bureaucrat", 150);
	Intern		*intern		= new Intern();
	OfficeBlock	*full = new OfficeBlock(signer, executor, intern);

	full->doBureaucracy("presidental pardon", "Criminal Scum");
	std::cout << std::endl;

	OfficeBlock *empty = new OfficeBlock();

	empty->doBureaucracy("shrubbery creation", "somewhere");
	std::cout << std::endl;

	empty->setSigner(bad);
	empty->setExecutor(bad);
	empty->setIntern(intern);
	empty->doBureaucracy("robotomy request", "Bender");
	std::cout << std::endl;

	empty->setSigner(signer);
	empty->doBureaucracy("robotomy request", "Bender");
	std::cout << std::endl;

	empty->setExecutor(executor);
	empty->doBureaucracy("robotomy request", "Bender");
	std::cout << std::endl;
}
