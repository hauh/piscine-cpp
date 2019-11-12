/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 16:52:54 by smorty            #+#    #+#             */
/*   Updated: 2019/11/12 18:56:24 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		PONY_HPP
# define	PONY_HPP

# include <iostream>
# include <string>

class Pony
{
private:
	std::string	_name;
	std::string	_color;
	int			_age;
	int			_weight;

public:
	Pony();
	Pony(std::string &name, std::string &color, int age, int weight);
	~Pony();

	void	introduce() const;
	void	speak() const;

	const std::string	&getName() const;
	const std::string	&getColor() const;
	int					getAge() const;
	int					getWeight() const;

	void	setName(std::string &name);
	void	setColor(std::string &color);
	void	setAge(int age);
	void	setWeight(int weight);
};

#endif
