/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 19:36:27 by smorty            #+#    #+#             */
/*   Updated: 2019/11/24 00:08:37 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		HUMAN_HPP
# define	HUMAN_HPP

#include <string>
#include <iostream>

class Human
{
private:
	void	meleeAttack(std::string const & target);
	void	rangedAttack(std::string const & target);
	void	intimidatingShout(std::string const & target);

public:
	void	action(std::string const & action_name, std::string const & target);
};

#endif
