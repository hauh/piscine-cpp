/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BocalSteroid.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 22:31:05 by smorty            #+#    #+#             */
/*   Updated: 2019/11/23 22:40:03 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		BOCALSTEROID_HPP
# define	BOCALSTEROID_HPP

# include	"IAsteroid.hpp"

class BocalSteroid : public IAsteroid
{
private:
	std::string	_name;

public:
	BocalSteroid();
	~BocalSteroid();
	BocalSteroid(BocalSteroid const &);
	BocalSteroid	&operator=(BocalSteroid const &);

	virtual std::string beMined(DeepCoreMiner *) const;
	virtual std::string beMined(StripMiner *) const;
	virtual std::string getName() const;
};

#endif
