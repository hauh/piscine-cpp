/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 19:37:52 by smorty            #+#    #+#             */
/*   Updated: 2019/11/16 07:43:49 by smorty           ###   ########.fr       */
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
	std::map<const std::string, m_ptr> dict;
	dict.emplace("meleeAttack", &Human::meleeAttack);
	dict.emplace("rangedAttack", &Human::rangedAttack);
	dict.emplace("intimidatingShout", &Human::intimidatingShout);
	if (dict[action_name])
		(this->*dict[action_name])(target);
}
