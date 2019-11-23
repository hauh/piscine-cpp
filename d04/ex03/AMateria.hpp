/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 18:49:48 by smorty            #+#    #+#             */
/*   Updated: 2019/11/23 21:03:37 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		AMATERIA_HPP
# define	AMATERIA_HPP

# include	<string>
# include	<iostream>
# include	"ICharacter.hpp"

class ICharacter;

class AMateria
{
private:
	std::string		_type;
	unsigned int	_xp;

public:
	AMateria(std::string const & type);
	virtual ~AMateria();

	std::string const &	getType() const;
	unsigned int		getXP() const;

	void	setXP(unsigned int xp);

	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);
};

#endif
