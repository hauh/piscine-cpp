/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 21:51:43 by smorty            #+#    #+#             */
/*   Updated: 2019/11/25 23:27:54 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		SHRUBBERYCREATIONFORM_HPP
# define	SHRUBBERYCREATIONFORM_HPP

# include	<fstream>
# include	"Form.hpp"

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm(std::string const & target);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm const &);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &);

private:
	void	actuallyExecute() const override;
};

#endif
