/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 20:38:29 by smorty            #+#    #+#             */
/*   Updated: 2019/11/23 20:55:35 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		MATERIASOURCE_HPP
# define	MATERIASOURCE_HPP

# include	"IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*_known[4];

public:
	MateriaSource();
	MateriaSource(MateriaSource const &);
	~MateriaSource();
	MateriaSource &operator=(MateriaSource const &);

	virtual void		learnMateria(AMateria *);
	virtual AMateria*	createMateria(std::string const & type);	

private:
	void	clearKnown();
	void	copyKnown(AMateria * const *);
};

#endif
