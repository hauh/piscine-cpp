/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 23:56:53 by smorty            #+#    #+#             */
/*   Updated: 2019/11/22 00:07:35 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		POWERFIST_HPP
# define	POWERFIST_HPP

# include	"AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
	PowerFist();
	PowerFist(PowerFist const &);
	~PowerFist();
	PowerFist	&operator=(PowerFist const &);

	void	attack() const;
};

#endif
