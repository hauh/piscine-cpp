/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 19:29:37 by smorty            #+#    #+#             */
/*   Updated: 2019/11/17 20:02:33 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.class.hpp"

int	main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << "----------" << std::endl;

	std::cout << "a = " << a << "; b = " << b << std::endl;
	std::cout << "min(a, b) = " << Fixed::min(a, b) << std::endl; 
	std::cout << "max(a, b) = " << Fixed::max(a, b) << std::endl; 
	std::cout << "a + b = " << a + b << std::endl;
	std::cout << "a - b = " << a - b << std::endl;
	std::cout << "a * b = " << (a * b) << std::endl;
	std::cout << "(a + 1) / b = " << (a + 1) / b << std::endl;
	std::cout << "a < b ? " << (a < b) << std::endl;

	return (0);
}
