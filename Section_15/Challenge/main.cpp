// Section 15
// Challenge 
#include <iostream>
#include <vector>
#include "Savings_Account.h"
#include "Account_Util.h"
#include "Checking_Account.h"
#include "Trust_Account.h"

using namespace std;

int main() {
    cout.precision(2);
    cout << fixed;
   
    // Accounts
    vector<Account> accounts;
    accounts.push_back(Account {});
    accounts.push_back(Account {"Larry"});
    accounts.push_back(Account {"Moe", 2000} );
    accounts.push_back(Account {"Curly", 5000} );
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts,2000);
    
    // Savings 

    vector<Savings_Account> sav_accounts;
    sav_accounts.push_back(Savings_Account {} );
    sav_accounts.push_back(Savings_Account {"Superman"} );
    sav_accounts.push_back(Savings_Account {"Batman", 2000} );
    sav_accounts.push_back(Savings_Account {"Wonderwoman", 5000, 5.0} );

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);

    // Checking

    vector<Checking_Account> check_accounts;
    check_accounts.push_back(Checking_Account {});
    check_accounts.push_back(Checking_Account {"Mandalorian"});
    check_accounts.push_back(Checking_Account {"Grogo", 2000});
    check_accounts.push_back(Checking_Account {"The Pirate", 3000});

    display(check_accounts);
    deposit(check_accounts, 2000);
    withdraw(check_accounts, 3000);

    // Trust 

    vector<Trust_Account> trust_accounts;
    trust_accounts.push_back(Trust_Account {});
    trust_accounts.push_back(Trust_Account {"Artimas"});
    trust_accounts.push_back(Trust_Account {"Babar", 5000});
    trust_accounts.push_back(Trust_Account {"Zazu", 200});

    display(trust_accounts);
    withdraw(trust_accounts, 1000);
    deposit(trust_accounts, 5000);
    withdraw(trust_accounts, 100);
    display(trust_accounts);
    withdraw(trust_accounts, 1000);
    display(trust_accounts);
    withdraw(trust_accounts, 1000);
    display(trust_accounts);
    withdraw(trust_accounts, 1000);
    

    return 0;
}

