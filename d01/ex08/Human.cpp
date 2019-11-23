/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 19:37:52 by smorty            #+#    #+#             */
/*   Updated: 2019/11/24 00:03:18 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void	Human::meleeAttack(std::string const & target) {
	std::cout << "melee attack at " << target << std::endl;
}

void	Human::rangedAttack(std::string const & target) {
	std::cout << "ranged attack at " << target << std::endl;
}

void	Human::intimidatingShout(std::string const & target) {
	std::cout << "intimidately shouting at " << target << std::endl;
}

void	Human::action(std::string const & action_name, std::string const & target)
{
	using m_ptr = void (Human::*)(std::string const &);
	std::string	names[3] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
	m_ptr		funcs[3] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};

	for (int i = 0; i < 3; ++i)
		if (names[i] == action_name)
			(this->*funcs[i])(target);
}
