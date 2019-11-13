/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 18:25:28 by smorty            #+#    #+#             */
/*   Updated: 2019/11/13 18:59:15 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

static void	replace(std::ifstream &in, std::ofstream &out, std::string find, std::string replace)
{
	std::string file_content;
	while (std::getline(in, file_content))
		out << (file_content == find ? replace : file_content) + '\n';
}

int			main(int argc, char **argv)
{
	if (argc < 4)
		std::cout << "Usage: filename string_find string_replace" << std::endl;
	else if (!argv[2][0] || !argv[3][0])
		std::cout << "String can not be empty" << std::endl;
	else
	{
		std::string		file_name(argv[1]);
		std::ifstream	file_in(file_name);
		if (!file_in)
			std::cout << "Error opening file" << std::endl;
		else
		{
			std::ofstream	file_out(file_name + ".REPLACE");
			replace(file_in, file_out, argv[2], argv[3]);
		}
	}
	return (0);
}
