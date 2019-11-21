/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 23:56:53 by smorty            #+#    #+#             */
/*   Updated: 2019/11/22 00:06:17 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		PLASMARIFLE_HPP
# define	PLASMARIFLE_HPP

# include	"AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle();
	PlasmaRifle(PlasmaRifle const &);
	~PlasmaRifle();
	PlasmaRifle	&operator=(PlasmaRifle const &);

	void	attack() const;
};

#endif
