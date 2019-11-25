/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 21:51:43 by smorty            #+#    #+#             */
/*   Updated: 2019/11/25 23:26:53 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ROBOTOMYREQUESTFORM_HPP
# define	ROBOTOMYREQUESTFORM_HPP

# include	<random>
# include	"Form.hpp"

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm(std::string const & target);
	~RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm const &);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &);

private:
	void	actuallyExecute() const override;
};

#endif
