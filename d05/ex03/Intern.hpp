/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 23:38:53 by smorty            #+#    #+#             */
/*   Updated: 2019/11/25 23:55:29 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		INTERN_HPP
# define	INTERN_HPP

# include	"PresidentialPardonForm.hpp"
# include	"RobotomyRequestForm.hpp"
# include	"ShrubberyCreationForm.hpp"

class Intern
{
public:
	class UnkownFormException : public std::exception {
		public:	const char * what() const noexcept;
	};

	Intern();
	~Intern();
	Intern(Intern const &);
	Intern &operator=(Intern const &);

	Form	*makeForm(std::string const & name, std::string const & target) const;
};

#endif
