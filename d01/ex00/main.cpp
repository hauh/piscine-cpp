/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 18:37:54 by smorty            #+#    #+#             */
/*   Updated: 2019/11/12 18:45:06 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.class.hpp"

void	ponyOnTheHeap()
{
	std::string name = "Fluttershy";
	std::string color = "yellow";
	Pony *fluttershy = new Pony(name, color, 9, 80);
	
	fluttershy->introduce();
	fluttershy->speak();

	delete fluttershy;
}

void	ponyOnTheStack()
{
	std::string	name = "Pinkie Pie";
	std::string	color = "pink";
	Pony pinkie_pie(name, color, 7, 65);

	pinkie_pie.introduce();
	pinkie_pie.speak();
}

int		main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
}
