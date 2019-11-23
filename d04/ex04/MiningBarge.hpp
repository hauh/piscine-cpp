/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 22:41:34 by smorty            #+#    #+#             */
/*   Updated: 2019/11/23 22:45:04 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		MININGBARGE_HPP
# define	MININGBARGE_HPP

# include	"IMiningLaser.hpp"
# include	"IAsteroid.hpp"

class MiningBarge
{
private:
	std::string		_name;
	IMiningLaser	*_lasers[4];

public:
	MiningBarge(std::string	name);
	MiningBarge(MiningBarge const &);
	~MiningBarge();
	MiningBarge	&operator=(MiningBarge const &);

	void	equip(IMiningLaser *);
	void	mine(IAsteroid *) const;
};

#endif
