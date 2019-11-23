/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 18:51:58 by smorty            #+#    #+#             */
/*   Updated: 2019/11/23 21:03:24 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ICHARACTER_HPP
# define	ICHARACTER_HPP

# include	<string>
# include	"AMateria.hpp"

class AMateria;

class ICharacter
{
public:
	virtual	~ICharacter() {}

	virtual std::string const &	getName() const = 0;

	virtual void	equip(AMateria* m) = 0;
	virtual void	unequip(int idx) = 0;
	virtual void	use(int idx, ICharacter& target) = 0;
};

#endif
