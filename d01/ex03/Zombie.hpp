/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 18:55:07 by smorty            #+#    #+#             */
/*   Updated: 2019/11/12 21:47:14 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ZOMBIE_HPP
# define	ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
private:
	std::string	_name;
	std::string	_type;

public:
	Zombie();
	Zombie(std::string &name, std::string &type);
	~Zombie();

	void	announce() const;
};

#endif
