/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 23:55:33 by smorty            #+#    #+#             */
/*   Updated: 2019/11/13 00:17:48 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		WEAPON_HPP
# define	WEAPON_HPP

# include <string>

class Weapon
{
private:
	std::string _type;

public:
	Weapon();
	Weapon(std::string type);

	const std::string	&getType() const;
	void				setType(std::string type);
};

#endif
