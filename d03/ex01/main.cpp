/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 19:55:09 by smorty            #+#    #+#             */
/*   Updated: 2019/11/20 21:42:37 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	scav2 = scav;

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
