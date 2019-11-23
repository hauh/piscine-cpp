/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 22:07:33 by smorty            #+#    #+#             */
/*   Updated: 2019/11/23 22:20:23 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		DEEPCOREMINER_HPP
# define	DEEPCOREMINER_HPP

# include	<iostream>
# include	"IMiningLaser.hpp"

class DeepCoreMiner : public IMiningLaser
{
public:
	DeepCoreMiner();
	DeepCoreMiner(DeepCoreMiner const &);
	~DeepCoreMiner();
	DeepCoreMiner	&operator=(DeepCoreMiner const &);

	virtual void	mine(IAsteroid *);
};

#endif
