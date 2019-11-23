/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 18:34:01 by smorty            #+#    #+#             */
/*   Updated: 2019/11/23 23:24:50 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		NINJATRAP_HPP
# define	NINJATRAP_HPP

# include	"ClapTrap.hpp"
# include	"ScavTrap.hpp"
# include	"FragTrap.hpp"

class NinjaTrap : public ClapTrap
{
private:
	static std::string _random_challenges[];

public:
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap &copy);
	~NinjaTrap();
	NinjaTrap &operator=(NinjaTrap const & copy);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	void	ninjaShoebox(NinjaTrap & ninja);
	void	ninjaShoebox(ScavTrap & scav);
	void	ninjaShoebox(FragTrap & frag);
};

#endif
