/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 19:37:30 by smorty            #+#    #+#             */
/*   Updated: 2019/11/27 00:08:51 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		CENTRALBUREAUCRACY_HPP
# define	CENTRALBUREAUCRACY_HPP

# include	"OfficeBlock.hpp"

class CentralBureaucracy
{
struct BursReserve
{
	Bureaucrat		*bur;
	BursReserve		*next;
};

struct TargetsQueue
{
	std::string		target;
	TargetsQueue	*next;
};

private:
	OfficeBlock		*_sector[20];
	BursReserve		*_burs_head;
	TargetsQueue	*_targets_start;
	TargetsQueue	*_targets_end;

public:
	class AlreadyHiredException : public std::exception {
		public: const char * what() const noexcept;
	};

	CentralBureaucracy();
	~CentralBureaucracy();
	CentralBureaucracy(CentralBureaucracy const &) = delete;
	CentralBureaucracy &operator=(CentralBureaucracy const &) = delete;

	void	doBureaucracy();

	void	queueUp(std::string const &);
	void	hireBureaucrat(Bureaucrat *);
	void	fireBureaucrat(Bureaucrat *);
	void	status() const;

private:
	void	addToReserve(Bureaucrat *);
	void	removeFromReserve(Bureaucrat *);
	void	replaceBureaucrat(OfficeBlock * office, int type);
};

#endif
