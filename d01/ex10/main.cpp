/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 08:37:32 by smorty            #+#    #+#             */
/*   Updated: 2019/11/16 09:09:34 by smorty           ###   ########.fr       */
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
		std::cout << filename << ": error opening file" << std::endl;
}

static void	output_stdin(void)
{
	std::string in;

	while (getline(std::cin, in))
		std::cout << in << std::endl;
}

int			main(int argc, char **argv)
{
	if (argc > 1)
		for (int i = 1; i < argc; ++i)
			output_file(argv[i]);
	else
		output_stdin();
	return (0);
}
