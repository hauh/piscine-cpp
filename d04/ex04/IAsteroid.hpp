/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IAsteroid.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 22:06:14 by smorty            #+#    #+#             */
/*   Updated: 2019/11/23 23:01:56 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		IASTEROID_HPP
# define	IASTEROID_HPP

# include	<string>

class DeepCoreMiner;
class StripMiner;

class IAsteroid
{
public:
	virtual ~IAsteroid() {}
	virtual std::string beMined(DeepCoreMiner *) const = 0;
	virtual std::string beMined(StripMiner *) const = 0;
	virtual std::string getName() const = 0;
};

#endif
