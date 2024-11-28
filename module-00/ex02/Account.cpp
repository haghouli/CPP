/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:58:09 by haghouli          #+#    #+#             */
/*   Updated: 2023/05/24 17:51:20 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void){
    return _nbAccounts;
}

int	Account::getTotalAmount(void){
    return _totalAmount;
}

int Account::getNbDeposits(void) {
    return _totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
    return _totalNbWithdrawals;
}

void    Account::displayAccountsInfos(void) {
    _displayTimestamp();
    std::cout << " accounts:" << _nbAccounts << ";total:" << _totalAmount 
    << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

Account::Account( void ){
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account( void ) {
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}


void	Account::makeDeposit(int deposit){
    int p_amout;
    
    p_amout = _amount;
    _amount += deposit;
    _totalAmount += deposit;
    _totalNbDeposits++;
    _nbDeposits++;
    
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";p_amount:" << p_amout << ";deposit:"
    << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal){
    if(withdrawal <= _amount) {
        int p_amount;

        p_amount = _amount;
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        _displayTimestamp();
        std::cout << " index:" << _accountIndex << ";p_amount:"
        << p_amount << ";withdrawal:" << withdrawal << ";amount:" << _amount
        << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
        return true;
    }
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";p_amount:"
        << _amount << ";withdrawal:" << "refused" << std::endl;
    return false;
}
int		Account::checkAmount(void) const{
    return _amount;
}

void	Account::displayStatus(void) const{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:"
    << _amount << ";deposits:"  << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void){
    time_t t;
    struct tm * timeinfo;
    char buffer[20];

    time(&t);
    timeinfo = std::localtime(&t);

    std::strftime(buffer, 20, "[%G%d%m_%I%M%S]", timeinfo);
    std::cout << buffer;
}

Account::Account(int initial_deposit){
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _amount = initial_deposit;
    _nbAccounts++;
    _accountIndex = _nbAccounts - 1;
    _totalAmount += _amount;
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}