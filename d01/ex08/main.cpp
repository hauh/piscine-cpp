/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 22:18:11 by smorty            #+#    #+#             */
/*   Updated: 2019/11/13 22:29:03 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main()
{
	Human object;

	object.action("meleeAttack", "goblin");
	object.action("rangedAttack", "orc");
	object.action("intimidatingShout", "dragon");
	object.action("undefinedAction", "no one");
}
