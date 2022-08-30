/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:32:43 by jmatute-          #+#    #+#             */
/*   Updated: 2022/08/30 17:58:58 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>


int Account::getNbAccounts(){
    return(Account::_nbAccounts);
}

int Account::checkAmount() const{
    return (this->_amount);
}

int Account::getTotalAmount(){
    return(Account::_totalAmount);
}

int Account::getNbDeposits(){
    return(Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(){
    return(Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos(){
    Account::_displayTimestamp();
    std::cout <<" accounts:" << Account::_nbAccounts <<";total:" << Account::_totalAmount;
    std::cout << ";deposits:" << Account::_totalNbDeposits<< ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

Account::Account(int initial_deposit){

    Account::_accountIndex = Account::getNbAccounts();
    Account::_nbAccounts += 1;
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    Account::_displayTimestamp();
    Account::_totalAmount += initial_deposit;
    std::cout << " index:" << Account::_accountIndex <<";amount:" << Account::_amount << ";created" << std::endl;
    
}

Account::Account(void){
    
    Account::_accountIndex = Account::getNbAccounts();
    Account::_nbAccounts += 1;
    this->_amount = 0;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    Account::_displayTimestamp();
    std::cout << " index:" << Account::_accountIndex <<";amount:" << Account::_amount << ";created" << std::endl;
}

Account::~Account(){
    
    Account::_displayTimestamp();
	std::cout<<" index:"<<this->_accountIndex<<";amount:"<<this->_amount <<";closed" << std::endl;
}

void	Account::displayStatus() const{
    Account::_displayTimestamp();
    std::cout << " index:" << Account::_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit ){
    Account::_displayTimestamp();
    int new_amount = this->_amount + deposit;
    this->_nbDeposits += 1;
    this->_totalNbDeposits +=1;
    this->_totalAmount += deposit; 
    std::cout << " index:" << Account::_accountIndex << ";p_amount:" << this->_amount << ";deposit" << deposit;
    std::cout << ";amount:" << new_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
    this->_amount = new_amount;
}
bool    Account::makeWithdrawal(int withdrawl ){
    if (withdrawl > this->_amount){
        Account::_displayTimestamp();
        std::cout << " index:" << Account::_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl;
        return(false);
    }
    Account::_displayTimestamp();
    int new_amount =  this->_amount - withdrawl;
    this->_nbWithdrawals += 1;
    this->_totalAmount -= withdrawl; 
    this->_totalNbWithdrawals +=1;
    std::cout << " index:" << Account::_accountIndex << ";p_amount:" << this->_amount << ";withdrawl:" << withdrawl;
    std::cout << ";amount:" << new_amount << ";nd_withdrawals:" << this->_nbWithdrawals << std::endl;
    this->_amount = new_amount;
    return(true);
}

void    Account::_displayTimestamp(){
    
    time_t s_time;
	struct tm * timeinfo;
    char my_time[50];

	time (&s_time);
	timeinfo = localtime (&s_time);
	std::strftime(my_time,50,"[%Y%m%j_%H%M%S]", timeinfo);
	std::cout << my_time;
}
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;