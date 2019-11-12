/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 00:01:36 by smorty            #+#    #+#             */
/*   Updated: 2019/11/13 00:36:40 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		HUMANB_HPP
# define	HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string	_name;
	Weapon		*_weapon;

public:
	HumanB(std::string name);

	void	attack() const;

	void	setWeapon(Weapon &weapon);
};

#endif
