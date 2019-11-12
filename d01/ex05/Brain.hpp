/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 22:47:15 by smorty            #+#    #+#             */
/*   Updated: 2019/11/12 23:36:48 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		BRAIN_HPP
# define	BRAIN_HPP

#include <string>
#include <sstream>
#include <iostream>

class Brain
{
private:
	int _size;
	int _iq;

public:
	Brain();
	Brain(int size, int iq);
	~Brain();

	std::string	identify() const;

	int		getIQ() const;
	int		getSize() const;

	void	setIQ(int iq);
	void	setSize(int size);
};

#endif