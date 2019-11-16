/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 08:14:31 by smorty            #+#    #+#             */
/*   Updated: 2019/11/16 08:16:23 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int	main(int argc, char **argv)
{
	Logger obj("test");

	obj.log("logToConsole", "Hello, file!");
	obj.log("logToFile", "Hello, file!");
}
