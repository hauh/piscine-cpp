/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 19:29:25 by smorty            #+#    #+#             */
/*   Updated: 2019/11/23 20:57:28 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		CHARACTER_HPP
# define	CHARACTER_HPP

# include	"ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string	_name;
	AMateria	*_inventory[4];

public:
	Character(std::string const & name);
	Character(Character const & copy);
	~Character();
	Character &operator=(Character const & rhs);

	virtual std::string const &	getName() const;

	virtual void	equip(AMateria* m);
	virtual void	unequip(int idx);
	virtual void	use(int idx, ICharacter& target);

private:
	void	cleanInventory();
	void	fillInventory(AMateria * const * from);
};

#endif
