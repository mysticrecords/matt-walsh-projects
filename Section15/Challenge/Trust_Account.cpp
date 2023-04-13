#include <iostream>
#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, int withdraw_count, double int_rate) 
: Savings_Account {name, balance, int_rate}, withdraw_count {withdraw_count} {

}

bool Trust_Account::deposit(double amount) {
    if(amount >= def_bonus_deposit) {
        std::cout << "You've earned a $" << bonus_rate << " bonus for depositing a minimum of " << def_bonus_deposit << ".  ";
        return Savings_Account::deposit(amount+=bonus_rate);
    }
    else 
    return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount) {
    if ((amount/balance) > def_max_withdraw) {
        std::cout << "withdraw cannot be great than " << def_max_withdraw << " of balance.  ";
        std::cout << "withdraw is " << (amount/balance) << " of the account balance";
        return false;
    }
    if(withdraw_count >= max_withdraw) {
        std::cout << "You have reached you're withdraw limit for this account.  ";
        return false;
    }
    if(Account::withdraw(amount)) {
        withdraw_count++;
        return true; 
    }
    return false;
     
}

std::ostream &operator<<(std::ostream &os, const Trust_Account &account) 
{
    os << "[Trust Account "  << account.name << ": " << account.balance << ", withdraw count: " << account.withdraw_count << "]";
    return os;
}