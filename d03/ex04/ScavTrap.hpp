/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 18:34:01 by smorty            #+#    #+#             */
/*   Updated: 2019/11/21 00:23:35 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		SCAVTRAP_HPP
# define	SCAVTRAP_HPP

# include	"ClapTrap.hpp"
# include	<random>

class ScavTrap : public ClapTrap
{
private:
	static std::string _random_challenges[];

public:
	ScavTrap(std::string name);
	ScavTrap(ScavTrap &copy);
	~ScavTrap();
	ScavTrap &operator=(ScavTrap const & copy);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	void	challengeNewcomer(void) const;
};

#endif
