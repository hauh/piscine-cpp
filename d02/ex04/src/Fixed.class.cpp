/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 23:25:22 by smorty            #+#    #+#             */
/*   Updated: 2019/11/17 20:29:56 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

const int Fixed::m_fract_bits = 8;

Fixed::Fixed() : m_raw_bits(0) {}
Fixed::Fixed(const Fixed &obj)	{ m_raw_bits = obj.getRawBits(); }
Fixed::Fixed(const int value)	: m_raw_bits(value * (1 << m_fract_bits)) {}
Fixed::Fixed(const float value)	: m_raw_bits(static_cast<int>(roundf(value * (1 << m_fract_bits)))) {}

Fixed::~Fixed() {}

int		Fixed::toInt() const	{ return (m_raw_bits / (1 << m_fract_bits)); }
float	Fixed::toFloat() const	{ return (static_cast<float>(m_raw_bits) / (1 << m_fract_bits)); }

Fixed	&Fixed::operator=(const Fixed &obj)
{
	m_raw_bits = obj.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const		{ return (m_raw_bits); }
void	Fixed::setRawBits(int const raw)	{ m_raw_bits = raw; }

bool	Fixed::operator==(const Fixed &obj) const	{ return (toFloat() == obj.toFloat()); }
bool	Fixed::operator!=(const Fixed &obj) const	{ return (toFloat() != obj.toFloat()); }
bool	Fixed::operator<=(const Fixed &obj) const	{ return (toFloat() <= obj.toFloat()); }
bool	Fixed::operator>=(const Fixed &obj) const	{ return (toFloat() >= obj.toFloat()); }
bool	Fixed::operator<(const Fixed &obj) const	{ return (toFloat() < obj.toFloat()); }
bool	Fixed::operator>(const Fixed &obj) const	{ return (toFloat() > obj.toFloat()); }

Fixed	Fixed::operator+(const Fixed &obj) const	{ return (Fixed(toFloat() + obj.toFloat())); }
Fixed	Fixed::operator-(const Fixed &obj) const	{ return (Fixed(toFloat() - obj.toFloat())); }
Fixed	Fixed::operator*(const Fixed &obj) const	{ return (Fixed(toFloat() * obj.toFloat())); }
Fixed	Fixed::operator/(const Fixed &obj) const	{ return (Fixed(toFloat() / obj.toFloat())); }

Fixed	&Fixed::operator+=(const Fixed &obj)
{
	*this = *this + obj;
	return (*this);
}

Fixed	&Fixed::operator-=(const Fixed &obj)
{
	*this = *this - obj;
	return (*this);

}

Fixed	&Fixed::operator*=(const Fixed &obj)
{
	*this = *this * obj;
	return (*this);

}

Fixed	&Fixed::operator/=(const Fixed &obj)
{
	*this = *this / obj;
	return (*this);
}

Fixed	&Fixed::operator++(void)
{
	++m_raw_bits;
	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	--m_raw_bits;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed old(*this);
	++m_raw_bits;
	return (old);
}

Fixed	Fixed::operator--(int)
{
	Fixed old(*this);
	--m_raw_bits;
	return (old);
}

Fixed		&Fixed::min(Fixed &a, Fixed &b)	{ return (a < b ? a : b); }
Fixed		&Fixed::max(Fixed &a, Fixed &b)	{ return (a > b ? a : b); }
const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)	{ return (a < b ? a : b); }
const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)	{ return (a > b ? a : b); }

std::ostream	&operator<<(std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return (out);
}
