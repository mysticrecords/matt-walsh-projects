// Section 16 
// Challenge 
#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"
#include "I_Printable.h"

using namespace std; 

int main() {
    cout.precision(2);
    cout << fixed;

    Savings_Account s{"Jim", 1000, 2.0};
    std::cout << s << std::endl;
    s.deposit(10000);
    
    Account *p1 = new Savings_Account("Wonderwoman", 5000, 5.0);
    Account *p2 = new Checking_Account("Bones", 5000);
    Account *p3 = new Trust_Account("Porthos", 20000, 4.0);

    vector<Account *> accounts {p1,p2,p3};

    display(accounts);
    deposit(accounts, 2000);
    withdraw(accounts, 1000);
    
    return 0;
}

