/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 22:55:56 by smorty            #+#    #+#             */
/*   Updated: 2019/11/21 23:31:11 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		PEON_HPP
# define	PEON_HPP

#include	"Victim.hpp"

class Peon : public Victim
{
public:
	Peon() = delete;
	~Peon();
	Peon(Peon const & rhs);
	Peon &operator=(Peon const & rhs);

	Peon(std::string const & name);

	virtual void	getPolymorphed() const;
};

#endif
