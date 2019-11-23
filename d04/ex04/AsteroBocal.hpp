/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AsteroBocal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 22:31:05 by smorty            #+#    #+#             */
/*   Updated: 2019/11/23 22:34:18 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ASTEROBOCAL_HPP
# define	ASTEROBOCAL_HPP

# include	"IAsteroid.hpp"

class AsteroBocal : public IAsteroid
{
private:
	std::string	_name;

public:
	AsteroBocal();
	~AsteroBocal();
	AsteroBocal(AsteroBocal const &);
	AsteroBocal	&operator=(AsteroBocal const &);

	virtual std::string beMined(DeepCoreMiner *) const;
	virtual std::string beMined(StripMiner *) const;
	virtual std::string getName() const;
};

#endif
