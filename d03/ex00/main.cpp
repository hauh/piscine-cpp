/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 19:55:09 by smorty            #+#    #+#             */
/*   Updated: 2019/11/20 21:09:43 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	f1("Claptrap");
	FragTrap	*f2 = new FragTrap("CLAP-9000");

	f1.rangedAttack(f2->getName());
		f2->takeDamage(f1.getRangedDamage());
	f2->beRepaired(10);
	f2->meleeAttack(f1.getName());	
		f1.takeDamage(f2->getMeleeDamage());
	f2->beRepaired(10);

	FragTrap	f3(f1);
	f3 = *f2;
	delete (f2);
	f3.vaulthunter_dot_exe(f1.getName());
		f1.takeDamage(40);
	f3.vaulthunter_dot_exe(f1.getName());
		f1.takeDamage(40);
	f3.vaulthunter_dot_exe(f1.getName());
		f1.takeDamage(40);
	f3.vaulthunter_dot_exe(f1.getName());
	f3.vaulthunter_dot_exe(f1.getName());

	return (0);
}
