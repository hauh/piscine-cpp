/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 22:34:11 by smorty            #+#    #+#             */
/*   Updated: 2019/11/22 00:16:44 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		VICTIM_HPP
# define	VICTIM_HPP

#include	<string>
#include	<iostream>

class Victim
{
protected:
	std::string	_name;

public:
	Victim(std::string const & name);
	Victim(Victim const & rhs);
	virtual	~Victim();
	Victim	&operator=(Victim const & rhs);

	virtual void getPolymorphed() const;

	std::string	const & getName() const;
};

std::ostream	&operator<<(std::ostream & out, Victim const & rhs);

#endif
