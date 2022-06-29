#pragma once
#ifndef _TRUST_ACCOUNT_H
#define _TRUST_ACCOUNT_H
#include "Savings_Account.h"

class Trust_Account : public Savings_Account
{
    friend std::ostream &operator<<(std::ostream &os, const Trust_Account &account);

private:
    static constexpr const char *def_name = "Unnamed Trust Account";
    static constexpr const double def_int_rate = 0.0;
    static constexpr const double def_balance = 0.0;
    static constexpr int max_withdrawls = 3;
    static constexpr double max_withdraw_percent = 0.2;

protected:
    int num_withdrawls;

public:
    Trust_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
    bool deposit(double amount);
    bool withdraw(double amount);
};
#endif   