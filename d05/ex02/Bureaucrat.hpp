/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 18:47:13 by smorty            #+#    #+#             */
/*   Updated: 2019/11/25 22:40:23 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		BUREAUCRAT_HPP
# define	BUREAUCRAT_HPP

# include	<string>
# include	<iostream>
# include	"Form.hpp"

class Form;

class Bureaucrat
{
private:
	std::string const	_name;
	int					_grade;

public:
	class GradeTooHighException : public std::exception {
		public:	const char * what() const noexcept;
	};

	class GradeTooLowException : public std::exception {
		public:	const char * what() const noexcept;
	};

	Bureaucrat(std::string const & name, int grade);
	~Bureaucrat();
	Bureaucrat(Bureaucrat const &);
	Bureaucrat	&operator=(Bureaucrat const &);

	void	signForm(Form &) const;
	void	executeForm(Form const & form) const;

	std::string const	&getName() const;
	int					getGrade() const;

	void	incrementGrade();
	void	decrementGrade();
};

std::ostream	&operator<<(std::ostream &out, Bureaucrat const & obj);

#endif
