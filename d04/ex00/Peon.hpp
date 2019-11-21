/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 22:55:56 by smorty            #+#    #+#             */
/*   Updated: 2019/11/22 00:15:17 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		PEON_HPP
# define	PEON_HPP

#include	"Victim.hpp"

class Peon : public Victim
{
public:
	Peon(std::string const & name);
	Peon(Peon const & rhs);
	~Peon();
	Peon &operator=(Peon const & rhs);

	virtual void	getPolymorphed() const;
};

#endif
