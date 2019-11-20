/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 19:55:09 by smorty            #+#    #+#             */
/*   Updated: 2019/11/21 00:00:36 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int	main(void)
{
	FragTrap	frag("Claptrap");
	ScavTrap	scav("VR-0N1CA");
	NinjaTrap	inac("Interplanetary Ninja Assassin Claptrap");

	inac.meleeAttack(frag.getName());
		frag.takeDamage(inac.getMeleeDamage());
	inac.rangedAttack(scav.getName());
		scav.takeDamage(inac.getRangedDamage());
	frag.vaulthunter_dot_exe(inac.getName());
		inac.takeDamage(40);
	inac.beRepaired(20);

	NinjaTrap	inac2 = inac;
	
	inac.ninjaShoebox(inac2);
	inac.ninjaShoebox(frag);
	inac.ninjaShoebox(scav);
	inac.ninjaShoebox(inac);

	return (0);
}
