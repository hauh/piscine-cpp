/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 00:10:18 by smorty            #+#    #+#             */
/*   Updated: 2019/11/22 00:32:43 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ENEMY_HPP
# define	ENEMY_HPP

#include	<string>

class Enemy
{
private:
	std::string	_type;
	int			_hp;

public:
	Enemy(std::string const & type, int hp);
	Enemy(Enemy const &);
	virtual ~Enemy();
	Enemy	&operator=(Enemy const &);

	std::string const &	getType() const;
	int					getHP() const;
	
	virtual void	takeDamage(int);
};

#endif
