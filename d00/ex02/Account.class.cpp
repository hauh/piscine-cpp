/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 20:43:32 by smorty            #+#    #+#             */
/*   Updated: 2019/11/11 23:01:52 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account() : _amount(0), _nbDeposits(0), _nbWithdrawals(0), _accountIndex(_nbAccounts++), _countCalls(0)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::Account(int initial_deposit)
	: _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0), _accountIndex(_nbAccounts++), _countCalls(0)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
	_totalAmount += initial_deposit;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
	--_nbAccounts;
}

int 	Account::getNbAccounts()	{ return (_nbAccounts); }
int 	Account::getTotalAmount()	{ return (_totalAmount); }
int 	Account::getNbDeposits()	{ return (_totalNbDeposits); }
int		Account::getNbWithdrawals()	{ return (_totalNbWithdrawals); }

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount
		<< ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit;
	_amount += deposit;
	++_nbDeposits;
	std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
	_totalAmount += deposit;
	++_totalNbDeposits;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
	if (_amount < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	_amount -= withdrawal;
	++_nbWithdrawals;
	std::cout << withdrawal << ";amount:" << _amount << ";withdrawals:" << _nbWithdrawals << std::endl;
	_totalAmount -= withdrawal;
	++_totalNbWithdrawals;
	return (true);
}

int		Account::checkAmount() const
{
	++_countCalls;
	return (_amount);
}

void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp()
{
	time_t	t	= std::time(nullptr);
	std::tm	tm	= *std::localtime(&t);
	std::cout << std::put_time(&tm, "[%Y%m%d_%H%M%S] ");
}
