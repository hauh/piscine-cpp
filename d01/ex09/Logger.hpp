/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 07:18:29 by smorty            #+#    #+#             */
/*   Updated: 2019/11/16 08:26:24 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		LOGER_HPP
# define	LOGER_HPP

# include <string>
# include <ctime>
# include <iomanip>
# include <sstream>
# include <map>
# include <iostream>
# include <fstream>

class Logger
{
using f_ptr = void (Logger::*)(const std::string &) const;

private:
	std::string							_filename;
	std::map<const std::string, f_ptr>	_callback;

	std::string	makeLogEntry(const std::string &message) const;
	void		logToConsole(const std::string &log) const;
	void		logToFile(const std::string &log) const;

public:
	Logger(const std::string &filename);
	
	void	log(const std::string &dest, const std::string &message);
};

#endif
