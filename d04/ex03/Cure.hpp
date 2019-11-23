/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 19:01:51 by smorty            #+#    #+#             */
/*   Updated: 2019/11/23 20:13:48 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		Cure_HPP
# define	Cure_HPP

# include	"AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(Cure const &);
	~Cure();
	Cure &operator=(Cure const &);

	virtual AMateria*	clone() const;
};

#endif
