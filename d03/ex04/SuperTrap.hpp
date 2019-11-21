/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 18:34:01 by smorty            #+#    #+#             */
/*   Updated: 2019/11/21 21:27:39 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		SUPERTRAP_HPP
# define	SUPERTRAP_HPP

# include	"FragTrap.hpp"
# include	"NinjaTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap
{
private:
	static std::string _random_challenges[];

	SuperTrap();

public:
	SuperTrap(std::string name);
	SuperTrap(SuperTrap &copy);
	~SuperTrap();
	SuperTrap &operator=(SuperTrap const & copy);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

};

#endif
