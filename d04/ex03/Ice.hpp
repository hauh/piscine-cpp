/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 19:01:51 by smorty            #+#    #+#             */
/*   Updated: 2019/11/23 20:13:44 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ICE_HPP
# define	ICE_HPP

# include	"AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(Ice const &);
	~Ice();
	Ice &operator=(Ice const &);

	virtual AMateria*	clone() const;
};

#endif
