#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
    std::unique_ptr<Account> matt_account;
    std::unique_ptr<Account> effie_account;

    try {
        matt_account = std::make_unique<Savings_Account>("Matt", 2000, 2.0);
        std::cout << *matt_account << std::endl;
        matt_account->deposit(2000);
        std::cout << *matt_account << std::endl;
        matt_account->withdraw(4000);
        std::cout << *matt_account << std::endl;
        matt_account->withdraw(4000);
    } catch(IllegalBalanceException &e) {
        std::cout << e.what() << std::endl;
    } catch(InsufficentFundsException &e) {
        std::cout << e.what() <<std::endl;
    }
    
    std::cout << "Program completed successfully" << std::endl;
    return 0;
}

