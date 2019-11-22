/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 19:41:13 by smorty            #+#    #+#             */
/*   Updated: 2019/11/22 20:46:35 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		CHARACTER_HPP
# define	CHARACTER_HPP

# include	<string>
# include	<ostream>
# include	"AWeapon.hpp"
# include	"Enemy.hpp"

class Character
{
private:
	std::string		_name;
	int				_ap;
	AWeapon	const *	_weapon;

public:
	Character(std::string const & name);
	~Character();
	Character(Character const &);
	Character	&operator=(Character const &);

	void	equip(AWeapon const *);
	void	attack(Enemy *);
	void	recoverAP();

	std::string const &	getName() const;
	int					getAP() const;
	AWeapon	const *		getWeapon() const;
};

std::ostream	&operator<<(std::ostream &, Character const &);

#endif
