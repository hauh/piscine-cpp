/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 20:36:55 by smorty            #+#    #+#             */
/*   Updated: 2019/11/23 20:54:57 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		IMATERIASOURCE_HPP
# define	IMATERIASOURCE_HPP

# include	<string>
# include	"AMateria.hpp"

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void		learnMateria(AMateria *) = 0;
	virtual AMateria*	createMateria(std::string const & type) = 0;
};

#endif
