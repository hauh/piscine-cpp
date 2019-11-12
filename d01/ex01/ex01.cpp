/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 18:47:20 by smorty            #+#    #+#             */
/*   Updated: 2019/11/12 18:51:33 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void memoryLeak()
{
	std::string	*panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;

	delete panthere;
}
