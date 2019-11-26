/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 20:14:22 by smorty            #+#    #+#             */
/*   Updated: 2019/11/26 22:39:33 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FORM_HPP
# define	FORM_HPP

# include	<string>
# include	<ostream>
# include	"Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	std::string const	_name;
	std::string			_target;
	bool				_signed;
	int	const			_grade_to_sign;
	int	const			_grade_to_execute;

public:
	class GradeTooHighException : public std::exception {
		public:	const char * what() const noexcept;
	};

	class GradeTooLowException : public std::exception {
		public:	const char * what() const noexcept;
	};

	class UnsignedFormException : public std::exception {
		public:	const char * what() const noexcept;
	};

	Form(std::string const & name, std::string const & target, int grade_to_sign, int grade_to_execute);
	virtual ~Form();
	Form(Form const &);
	Form	&operator=(Form const &) = delete;

	void	execute(Bureaucrat const &) const;
	void	beSigned(Bureaucrat	const &);

	bool				isSigned() const;
	std::string	const	&getName() const;
	std::string	const	&getTarget() const;
	int					getGradeToSign() const;
	int					getGradeToExecute() const;

	void	setTarget(std::string const &);

private:
	virtual void	actuallyExecute() const = 0;
};

std::ostream	&operator<<(std::ostream &out, Form const &);

#endif
