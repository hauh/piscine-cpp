/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 00:34:35 by smorty            #+#    #+#             */
/*   Updated: 2019/11/22 00:39:19 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		SUPERMUTANT_HPP
# define	SUPERMUTANT_HPP

#include	<iostream>
#include	"Enemy.hpp"

class SuperMutant : public Enemy
{
public:
	SuperMutant();
	SuperMutant(SuperMutant const &);
	~SuperMutant();
	SuperMutant &operator=(SuperMutant const &);
};

#endif
