/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:26:33 by acanterg          #+#    #+#             */
/*   Updated: 2022/02/28 19:15:46 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

Account::Account(int initial_deposit) {
	_displayTimestamp();
	_accountIndex = _nbAccounts;
 	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	
	std::cout << "index:" << _accountIndex
			<< ";amount:" << _amount 
			<< ";created" << std::endl;

	_nbAccounts++;
	_totalAmount += _amount;
	return;
}

Account::~Account() {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";amount:" << _amount 
			<< ";closed" << std::endl;

	_nbAccounts--;
	_totalAmount -= _amount;
	return;
}

void Account::displayAccountsInfos() {
	_displayTimestamp();

	std::cout << "accounts:" << _nbAccounts
			<< ";total:" << _totalAmount 
			<< ";deposits:" << _totalNbDeposits 
			<< ";withdrawals:" << _totalNbWithdrawals
			<< std::endl;
			
	return ;
}

void Account::displayStatus() const {
	_displayTimestamp();

	std::cout << "index:" << _accountIndex
		<< ";amount:" << _amount 
		<< ";deposits:" << _nbDeposits 
		<< ";withdrawals:" << _nbWithdrawals
		<< std::endl;

	return ;
}

void Account::makeDeposit(int deposit) {
	int p_amount = _amount;
	
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	
	_displayTimestamp();

	std::cout << "index:" << _accountIndex
		<< ";p_amount:" << p_amount 
		<< ";deposit:" << deposit 
		<< ";amount:" << _amount
		<< ";nb_deposits:" << _nbDeposits
		<< std::endl;

	return ;
}

bool Account::makeWithdrawal(int withdrawal) {
	int p_amount = _amount;

	_displayTimestamp();

	if (p_amount - withdrawal >= 0) {
		_amount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;
		
		std::cout << "index:" << _accountIndex
			<< ";p_amount:" << p_amount 
			<< ";withdrawal:" << withdrawal 
			<< ";amount:" << _amount
			<< ";nb_withdrawals:" << _nbWithdrawals
			<< std::endl;
			return (true);
	}

	std::cout << "index:" << _accountIndex
		<< ";p_amount:" << p_amount 
		<< ";withdrawal:refused" << std::endl;

	return (false);
	
}

void	Account::_displayTimestamp() {
    std::time_t rawtime;
    std::tm* timeinfo;
    char time_str[16];

    std::time(&rawtime);
    timeinfo = std::localtime(&rawtime);

    std::strftime(time_str, 16, "%Y%m%d_%H%M%S", timeinfo);

	std::cout << "[" << time_str << "] ";
	
	// FOR TESTING WITH DIFF!
	// use: diff <(./thejobofmydreams) 19920104_091532.log 
	//std::cout << "[19920104_091532] ";
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
