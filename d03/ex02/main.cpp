/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 19:55:09 by smorty            #+#    #+#             */
/*   Updated: 2019/11/20 23:12:31 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	FragTrap	frag("Claptrap");
	ScavTrap	scav("VR-0N1CA");

	frag.rangedAttack(scav.getName());
		scav.takeDamage(frag.getRangedDamage());
	scav.beRepaired(10);
	scav.meleeAttack(frag.getName());	
		frag.takeDamage(scav.getMeleeDamage());
	frag.beRepaired(10);

	ScavTrap	scav2(scav);
	FragTrap	frag2 = frag;

	frag2.vaulthunter_dot_exe(scav2.getName());
		scav2.takeDamage(40);
	frag2.vaulthunter_dot_exe(scav2.getName());
		scav2.takeDamage(40);
	frag2.vaulthunter_dot_exe(scav2.getName());
		scav2.takeDamage(40);
	frag2.vaulthunter_dot_exe(scav2.getName());
	frag2.vaulthunter_dot_exe(scav2.getName());

	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.challengeNewcomer();

	return (0);
}
