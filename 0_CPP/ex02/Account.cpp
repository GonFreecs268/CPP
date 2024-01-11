/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:23:08 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/10 15:23:16 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <string>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
    std::cout << "Constructor called" << std::endl;
    
    this->_accountIndex = Account::_nbAccounts;
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    _nbAccounts += 1;
    _totalAmount += this->_amount;
    _displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "created" << std::endl;
    return ;
}

Account::~Account(void) {

    std::cout << "Destructor called" << std::endl;
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "closed" << std::endl;
    return ;
}

void Account::_displayTimestamp( void ) {

    std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);

    std::cout << '[' << std::setfill('0') << std::setw(4) << (now->tm_year + 1900)
              << std::setw(2) << (now->tm_mon + 1)
              << std::setw(2) << now->tm_mday << '_'
              << std::setw(2) << now->tm_hour
              << std::setw(2) << now->tm_min
              << std::setw(2) << now->tm_sec << "] ";
    return ;
}

int Account::getNbAccounts( void ) {

    return (Account::_nbAccounts);
}

int Account::getTotalAmount( void ) {

    return (Account::_totalAmount);
}

int Account::getNbDeposits( void ) {

    return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals( void ) {

    return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos( void ) {

    _displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts() << ";";
    std::cout << "total:" << Account::getTotalAmount() << ";";
    std::cout << "deposits:" << Account::getNbDeposits() << ";";
    std::cout << "withdrawals:" << Account::getNbWithdrawals() << ";" << std::endl;
    return ;
}

void    Account::makeDeposit( int deposit ) {

    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    std::cout << "deposit:" << deposit << ";";
    this->_amount += deposit;
    this->_nbDeposits += 1;
    std::cout << "amont:" << this->_amount << ";";
    std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
    Account::_totalNbDeposits += 1;
    Account::_totalAmount += deposit;
    return ;
}

bool Account::makeWithdrawal( int withdrawal ) {

    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    std::cout << "withdrawal:";
    if (withdrawal > this->_amount)
        return (std::cout << "refused\n", false);
    else
        std::cout << withdrawal << ";";
    this->_amount -= withdrawal;
    this->_nbWithdrawals += 1;
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    Account::_totalAmount -= withdrawal;
    Account::_totalNbWithdrawals += 1;
    return (true);
}

int Account::checkAmount( void ) const {

    return (this->_amount);
}

void    Account::displayStatus( void ) const {

    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "deposits:" << this->_nbDeposits << ";";
    std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}
