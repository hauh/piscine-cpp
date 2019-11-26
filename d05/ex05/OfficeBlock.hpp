/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 18:28:08 by smorty            #+#    #+#             */
/*   Updated: 2019/11/26 19:57:48 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		OFFICEBLOCK_HPP
# define	OFFICEBLOCK_HPP

# include	"Bureaucrat.hpp"
# include	"Intern.hpp"
# include	"Form.hpp"

class OfficeBlock
{
private:
	Bureaucrat	*_signer;
	Bureaucrat	*_executor;
	Intern		*_intern;

public:
	class NonFunctionalOfficeException : public std::exception {
		public:	const char * what() const noexcept;
	};

	OfficeBlock();
	OfficeBlock(Bureaucrat * signer, Bureaucrat * executor, Intern * intern);
	~OfficeBlock();
	OfficeBlock(OfficeBlock const &) = delete;
	OfficeBlock	&operator=(OfficeBlock const &) = delete;

	void	doBureaucracy(std::string const & form, std::string const & target) const;

	Bureaucrat	*getSigner() const;
	Bureaucrat	*getExecutor() const;
	Intern		*getIntern() const;

	void	setSigner(Bureaucrat *);
	void	setExecutor(Bureaucrat *);
	void	setIntern(Intern *);
};

#endif
