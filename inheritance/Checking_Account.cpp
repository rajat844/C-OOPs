#include <iostream>
#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance)
    : Account{name, balance} {}

bool Checking_Account::withdraw(double amount){
    amount = amount + 1.50;
    return Account::withdraw(amount);
}

std::ostream &operator<<(std::ostream &os,const Checking_Account &account){
    os<<"Checking Account: "<<account.name<<" balance: "<<account.balance;
    return os;
}

