/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 19:55:09 by smorty            #+#    #+#             */
/*   Updated: 2019/11/21 20:46:25 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int	main(void)
{
	FragTrap	frag("Claptrap");
	ScavTrap	scav("VR-0N1CA");
	NinjaTrap	inac("Interplanetary Ninja Assassin Claptrap");

	SuperTrap	super("2UP3R-3G0");
	super.meleeAttack(frag.getName());
		frag.takeDamage(super.getMeleeDamage());
	super.rangedAttack(scav.getName());
		scav.takeDamage(super.getRangedDamage());
	super.ninjaShoebox(frag);
	super.ninjaShoebox(scav);
	super.ninjaShoebox(inac);
	super.vaulthunter_dot_exe(frag.getName());
	super.vaulthunter_dot_exe(scav.getName());
	super.vaulthunter_dot_exe(inac.getName());

	std::cout << std::endl;

	SuperTrap super2(super);

	super2.takeDamage(50);
	super = super2;
	super2.beRepaired(40);

	return (0);
}
