/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 23:01:48 by smorty            #+#    #+#             */
/*   Updated: 2019/11/12 23:45:01 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		HUMAN_HPP
# define	HUMAN_HPP

#include <iostream>
#include "Brain.hpp"

class Human
{
private:
	Brain * const	_brain;
	std::string		_name;
	int				_age;

public:
	Human();
	Human(std::string name, int age);
	~Human();

	std::string	identify();

	Brain				&getBrain() const;
	const std::string	&getName() const;
	int					getAge() const;

	void	growUp();
	void	rename(std::string new_name);
};

#endif
