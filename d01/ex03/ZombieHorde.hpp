/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 21:27:38 by smorty            #+#    #+#             */
/*   Updated: 2019/11/12 22:41:04 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ZOMBIEHORDE_HPP
# define	ZOMBIEHORDE_HPP

# include <random>
# include <ctime>
# include "Zombie.hpp"

class ZombieHorde
{
private:
	Zombie		**_horde;
	std::string	_type;
	int			_size;

public:
	ZombieHorde();
	ZombieHorde(int size);
	~ZombieHorde();

	void	announce();

private:
	static std::string _rand_names[];
	std::string	&getRandomName();
};

#endif