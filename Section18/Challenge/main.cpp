#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
    
    std::unique_ptr<Account> moes_accounts;
    std::unique_ptr<Account> another_account;

    try {
        moes_accounts = std::make_unique<Savings_Account> ("Moe", -1000);
    }
    catch (IllegalBalanceException &ex) {
        std::cout << ex.what() << std::endl;
    }

    try {
        another_account = std::make_unique<Savings_Account> ("Matt", 2000, 2.0);
        std::cout << *another_account << std::endl;
        another_account->deposit(250);
        std::cout << *another_account << std::endl;
        another_account->deposit(750);
        std::cout << *another_account << std::endl;
        another_account->withdraw(3100);
        

    } catch (InsufficientFundsException &ex) {
        std::cout << ex.what() << std::endl;
    }

    std::cout << "Program completed successfully" << std::endl;
    return 0;
}

