/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 23:18:47 by smorty            #+#    #+#             */
/*   Updated: 2019/11/12 00:15:58 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FIXED_CLASS_HPP
# define	FIXED_CLASS_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					m_raw_bits;
	static const int	m_fract_bits;

public:
	Fixed();
	Fixed(const Fixed &obj);
	Fixed(const int value);
	Fixed(const float value);
	~Fixed();

	int		toInt(void) const;
	float	toFloat(void) const;

	Fixed	&operator=(const Fixed &obj);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

std::ostream	&operator<<(std::ostream &out, const Fixed &obj);

# endif
