/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 08:37:32 by smorty            #+#    #+#             */
/*   Updated: 2019/11/16 09:17:23 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

static void	output_file(std::string filename)
{
	std::ifstream file(filename);
    if (file.is_open())
        std::cout << file.rdbuf();
	else
		std::cerr << filename << ": " << strerror(errno) << std::endl;
}

static void	output_stdin(std::istream &in)
{
	std::cout << in.rdbuf();
}

int			main(int argc, char **argv)
{
	if (argc > 1)
		for (int i = 1; i < argc; ++i)
			output_file(argv[i]);
	else
		output_stdin(std::cin);
	return (0);
}
