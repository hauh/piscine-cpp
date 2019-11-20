/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 18:34:01 by smorty            #+#    #+#             */
/*   Updated: 2019/11/20 20:52:18 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FRAGTRAP_HPP
# define	FRAGTRAP_HPP

#include	<string>
#include	<iostream>
#include	<random>

class FragTrap
{
private:
	static std::string _random_attacks[];

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
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap &copy);
	~FragTrap();
	FragTrap &operator=(FragTrap const & copy);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	vaulthunter_dot_exe(std::string const & target);

	std::string	const	&getName() const;
	int					getMeleeDamage() const;
	int					getRangedDamage() const;
};

#endif
