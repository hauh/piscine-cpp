/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 23:25:22 by smorty            #+#    #+#             */
/*   Updated: 2019/11/12 00:32:54 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

const int Fixed::m_fract_bits = 8;

Fixed::Fixed() : m_raw_bits(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	m_raw_bits = obj.getRawBits();
}

Fixed::Fixed(const int value) : m_raw_bits(value * (1 << m_fract_bits)) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value)
	: m_raw_bits(static_cast<int>(roundf(value * (1 << m_fract_bits))))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::toInt() const {
	return (m_raw_bits / (1 << m_fract_bits));
}

float	Fixed::toFloat() const {
	return (static_cast<float>(m_raw_bits) / (1 << m_fract_bits));
}

Fixed	&Fixed::operator=(const Fixed &obj)
{
	std::cout << "Assignation operator called" << std::endl;
	m_raw_bits = obj.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (m_raw_bits);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	m_raw_bits = raw;	
}

std::ostream	&operator<<(std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return (out);
}
