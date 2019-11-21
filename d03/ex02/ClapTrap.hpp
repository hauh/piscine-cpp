/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 21:45:22 by smorty            #+#    #+#             */
/*   Updated: 2019/11/21 21:32:51 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		CLAPTRAP_HPP
# define	CLAPTRAP_HPP

# include	<string>
# include	<iostream>

class ClapTrap
{
protected:
	std::string	_name;
	int			_level;
	int			_hp;
	int			_max_hp;
	int			_ep;
	int			_max_ep;
	int			_armor;
	int			_melee_dmg;
	int			_ranged_dmg;

	ClapTrap(std::string name, int level, int hp, int max_hp,
		int ep, int max_ep,	int armor, int melee_dmg, int ranged_dmg);
	ClapTrap(ClapTrap const & copy);
	~ClapTrap();
	ClapTrap &operator=(ClapTrap const & copy);

	virtual void	rangedAttack(std::string const & target);
	virtual void	meleeAttack(std::string const & target);
	virtual void	takeDamage(unsigned int amount);
	virtual void	beRepaired(unsigned int amount);

public:
	std::string	const	&getName() const;
	int					getMeleeDamage() const;
	int					getRangedDamage() const;

private:
	ClapTrap();
};

#endif
