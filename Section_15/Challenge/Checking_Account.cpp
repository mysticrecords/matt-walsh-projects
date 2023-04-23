#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance, double fee) 
    : Account {name, balance}, fee{fee} {
    }

//With every Checking account withdraw a $1.50 fee is taken
bool Checking_Account::withdraw(double amount) {
    return Account::withdraw(amount += fee);
}

std::ostream &operator<<(std::ostream &os, const Checking_Account &account) {
    os << "[Savings_Account: " << account.name << ": " << account.balance << ", $" << account.fee << " withdraw fee]";
    return os;
}