/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 22:16:10 by smorty            #+#    #+#             */
/*   Updated: 2019/11/21 22:53:40 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		SORCERER_HPP
# define	SORCERER_HPP

#include	<string>
#include	<iostream>
#include	"Victim.hpp"

class Sorcerer
{
private:
	std::string	_name;
	std::string	_title;

public:
	Sorcerer() = delete;
	Sorcerer(Sorcerer const & rhs);
	~Sorcerer();
	Sorcerer	&operator=(Sorcerer const & rhs);

	Sorcerer(std::string const & name, std::string const & title);

	void	polymorph(Victim const &) const;

	std::string	const & getName() const;
	std::string	const & getTitle() const;
};

std::ostream	&operator<<(std::ostream & out, Sorcerer const & rhs);

#endif
