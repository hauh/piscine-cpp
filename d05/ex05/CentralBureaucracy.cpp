/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 19:47:59 by smorty            #+#    #+#             */
/*   Updated: 2019/11/27 00:32:44 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CentralBureaucracy.hpp"

void	CentralBureaucracy::doBureaucracy()
{
	if (!_targets_start)
		return ;

	std::random_device rd;
   	std::mt19937 mt(rd());
   	std::uniform_int_distribution<> dist(0, 2);
	std::string form[3] {"presidental pardon", "robotomy request", "shrubbery creation"};

	TargetsQueue * iter = _targets_start;
	for (int i = 0; i < 20 && iter; ++i)
	{
		try
		{
			std::string const & current_form = form[dist(mt)];
			std::cout << "Executing form \"" << current_form
				<< "\", for target " << iter->target << ':' << std::endl;
			_sector[i]->doBureaucracy(current_form, iter->target);
			TargetsQueue *clean = iter;
			iter = iter->next;
			delete (clean);
		}
		catch (std::exception &e)
		{
			std::cout << "Bureaucracy failed because: " << e.what() << std::endl;
		}
		std::cout << std::endl;
	}
	if (!iter)
	{
		_targets_start = nullptr;
		_targets_end = nullptr;
	}
	else if (_targets_start != iter)
	{
		_targets_start = iter;
		doBureaucracy();
	}
}

void	CentralBureaucracy::queueUp(std::string const & name)
{
	TargetsQueue * insert = new TargetsQueue {name, nullptr};
	if (_targets_end)
	{
		_targets_end->next = insert;
		_targets_end = insert;
	}
	else
	{
		_targets_start = insert;
		_targets_end = insert;
	}
}

void	CentralBureaucracy::hireBureaucrat(Bureaucrat * fresh)
{
	if (!fresh)
		return ;

	for (OfficeBlock * office : _sector)
	{
		Bureaucrat *signer = office->getSigner();
		Bureaucrat *executor = office->getExecutor();
		if (fresh == signer || fresh == executor)
			throw AlreadyHiredException();
		if (!signer)
		{
			office->setSigner(fresh);
			return ;
		}
		if (!executor)
		{
			office->setExecutor(fresh);
			if (!office->getIntern())
				office->setIntern(new Intern());
			return  ;
		}
	}
	addToReserve(fresh);	
}

void	CentralBureaucracy::fireBureaucrat(Bureaucrat * fired)
{
	if (!fired)
		return ;

	for (OfficeBlock * office : _sector)
	{
		Bureaucrat *signer = office->getSigner();
		Bureaucrat *executor = office->getExecutor();
		if (fired == signer || fired == executor)
		{
			if (fired == signer)
				replaceBureaucrat(office, 1);
			else if (fired == executor)
				replaceBureaucrat(office, 0);
			std::cout << *fired << " fired!" << std::endl;
			return ;
		}
	}
	removeFromReserve(fired);
}

void	CentralBureaucracy::status() const
{
	std::cout << "Offices:" << std::endl;
	for (int i = 0; i < 20; ++i)
	{
		std::cout << "    Office " << i << ':' << std::endl;
		std::cout << "        Signer: ";
		if (_sector[i]->getSigner())
			std::cout << "grade " << _sector[i]->getSigner()->getGrade() << std::endl;
		else
			std::cout << "not present" << std::endl;
		std::cout << "        Executor: ";
		if (_sector[i]->getExecutor())
			std::cout << "grade " << _sector[i]->getExecutor()->getGrade() << std::endl;
		else
			std::cout << "not present" << std::endl;
	}

	int count = 0;
	BursReserve * burs_it = _burs_head;
	while (burs_it)
	{
		burs_it = burs_it->next;
		++count;
	}
	std::cout << "Bureaucrats in reserve: " << count << std::endl;

	count = 0;
	TargetsQueue * targets_it = _targets_start;
	while (targets_it)
	{
		targets_it = targets_it->next;
		++count;
	}
	std::cout << "Targets in queue: " << count << std::endl;
}

/*	Coplien	*/
CentralBureaucracy::CentralBureaucracy()
	: _burs_head(nullptr), _targets_start(nullptr), _targets_end(nullptr)
{
	for (int i = 0; i < 20; ++i)
		_sector[i] = new OfficeBlock();
}

CentralBureaucracy::~CentralBureaucracy()
{
	for (OfficeBlock * office : _sector)
	{
		delete (office->getIntern());
		delete (office);
	}
}

/*	Private	*/
void	CentralBureaucracy::addToReserve(Bureaucrat * fresh)
{
	if (_burs_head)
	{
		if (_burs_head->bur == fresh)
			throw AlreadyHiredException();
		BursReserve *iter = _burs_head;
		while (iter->next)
		{
			iter = iter->next;
			if (iter->bur == fresh)
				throw AlreadyHiredException();
		}
		iter->next = new BursReserve;
		iter->next->next = nullptr;
		iter->next->bur = fresh;
	}
	else
	{
		_burs_head = new BursReserve;
		_burs_head->next = nullptr;
		_burs_head->bur = fresh;
	}
}

void	CentralBureaucracy::removeFromReserve(Bureaucrat * fired)
{
	if (!_burs_head)
		return ;

	BursReserve *prev;
	if (_burs_head->bur == fired)
	{
		prev = _burs_head;
		_burs_head = _burs_head->next;
		delete (prev);
		std::cout << *fired << " fired from reserve!" << std::endl;
	}
	else
	{
		prev = _burs_head;
		BursReserve *iter = _burs_head->next;
		while (iter && iter->bur != fired)
		{
			prev = iter;
			iter = iter->next;
		}
		if (iter)
		{
			prev->next = iter->next;
			delete (iter);
			std::cout << *fired << " fired from reserve!" << std::endl;
		}
	}
}

void	CentralBureaucracy::replaceBureaucrat(OfficeBlock * office, int type)
{
	if (_burs_head)
	{
		BursReserve *clear = _burs_head;
		type ? office->setSigner(_burs_head->bur) : office->setExecutor(_burs_head->bur);
		_burs_head = _burs_head->next;
		delete (clear);
	}
	else
		type ? office->setSigner(nullptr) : office->setExecutor(nullptr);
}

/*	Exceptions	*/
const char *CentralBureaucracy::AlreadyHiredException::what() const noexcept {
	return ("Bureaucrat already hired");
}
