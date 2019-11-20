/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 18:34:01 by smorty            #+#    #+#             */
/*   Updated: 2019/11/20 21:15:51 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		SCAVTRAP_HPP
# define	SCAVTRAP_HPP

#include	<string>
#include	<iostream>
#include	<random>

class ScavTrap
{
private:
	static std::string _random_challenges[];

	std::string	_name;
	int			_level;
	int			_hp;
	int			_max_hp;
	int			_ep;
	int			_max_ep;
	int			_armor;
	int			_melee_dmg;
	int			_ranged_dmg;

public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap &copy);
	~ScavTrap();
	ScavTrap &operator=(ScavTrap const & copy);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	challengeNewcomer(void) const;

	std::string	const	&getName() const;
	int					getMeleeDamage() const;
	int					getRangedDamage() const;
};

#endif
