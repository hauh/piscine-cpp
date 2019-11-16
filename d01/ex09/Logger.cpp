/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 07:18:11 by smorty            #+#    #+#             */
/*   Updated: 2019/11/16 08:34:10 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

Logger::Logger(const std::string &filename) : _filename(filename)
{
	_callback.emplace("logToConsole", &Logger::logToConsole);
	_callback.emplace("logToFile", &Logger::logToFile);
}

void	Logger::log(const std::string &dest, const std::string &message)
{
	if (_callback[dest])
		(this->*_callback[dest])(Logger::makeLogEntry(message));
}

void	Logger::logToConsole(const std::string &log) const {
	std::cout << log << std::endl;
}

void	Logger::logToFile(const std::string	&log) const
{
	std::fstream	uidlFile(_filename, std::fstream::in | std::fstream::out | std::fstream::app);
	if (uidlFile.is_open()) 
	{
		uidlFile << log << std::endl;
		uidlFile.close();
	}
	else
		std::cout << "Error opening file" << std::endl;
}

std::string	Logger::makeLogEntry(const std::string &message) const
{
	auto t	= std::time(nullptr);
    auto tm	= *std::localtime(&t);
	std::ostringstream	timestream;
	timestream << std::put_time(&tm, "[%Y%m%d_%H:%M:%S]: ");
	return (timestream.str() + message);
}
