/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 23:42:45 by smorty            #+#    #+#             */
/*   Updated: 2019/11/22 00:19:57 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		AWEAPON_HPP
# define	AWEAPON_HPP

#include	<string>
#include	<iostream>

class AWeapon
{
private:
	std::string	_name;
	int			_damage;
	int			_apcost;

public:
	AWeapon(std::string const & name, int damage, int apcost);
	AWeapon(AWeapon const &);
	virtual ~AWeapon();
	AWeapon	&operator=(AWeapon const &);

	std::string const & getName() const;
	int					getDamage() const;
	int					getAPCost() const;

	virtual	void	attack() const = 0;
};

#endif
