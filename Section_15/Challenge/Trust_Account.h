#ifndef _TRUST_ACCOUNT_
#define _TRUST_ACCOUNT_

#include "Savings_Account.h"

class Trust_Account: public Savings_Account
{
    friend std::ostream &operator<<(std::ostream &os, const Trust_Account &account);
private:
    static constexpr const char * def_name = "Unamed Trust Account";
    static constexpr const double def_balance = 0.0;
    static constexpr const double def_int_rate = 1.5;
    static constexpr const double def_bonus_deposit = 5000.0;
    static constexpr const double def_max_withdraw = 0.2;
    static constexpr const double bonus_rate = 50.0;
    static constexpr const int max_withdraw = 3;
protected:
    int withdraw_count;
public:
    Trust_Account(std::string name = def_name, double balance = def_balance, int withdraw_count = 0, double int_rate = def_int_rate);
    bool deposit(double amount);
    bool withdraw(double amount) ;
};

#endif
