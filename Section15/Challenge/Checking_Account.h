#ifndef _CHECKING_ACCOUNT_
#define _CHECKING_ACCOUNT_
#include "Account.h"

class Checking_Account: public Account {
        friend std::ostream &operator<<(std::ostream &os, const Checking_Account &account);
    private:
        static constexpr const char * def_name = "Unamed checking account";
        static constexpr const double def_balance = 0.0;
        static constexpr const double withdraw_fee = 1.50;
    protected:
        double fee;
    public:
        Checking_Account(std::string name = def_name, double balance = def_balance, double fee = withdraw_fee);
        bool withdraw(double amount);
        
};

#endif
