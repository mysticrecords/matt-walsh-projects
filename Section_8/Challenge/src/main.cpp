#include <iostream>
#include <string>

const int DOLLAR{100};
const int QUARTER{25};
const int DIME{10};
const int NICKLE{5};
const int PENNY{1};

//function to calculate change in coins in US dollars
std::string change(int cents) {
int dollar{0};
int quarter{0};
int dime{0};
int nickle{0};
int penny{0};

dollar = (cents / DOLLAR);

cents %= DOLLAR;

quarter = (cents / QUARTER);

cents %= QUARTER;

dime = (cents / DIME);

cents %= DIME;

nickle = (cents / NICKLE);

cents %= NICKLE;

penny = (cents / PENNY);

std::string change_in_coins = std::string("You can provide this change as follows;\ndollars:    ") 
+ std::to_string(dollar) + std::string("\nquarters:   ")
+ std::to_string(quarter) + std::string("\ndimes:      ")
+ std::to_string(dime) + std::string("\nnickles:    ")
+ std::to_string(nickle) + std::string("\npennys:     ")
+ std::to_string(penny) + std::string("\n");

return change_in_coins;
}




int main() {

    int cents{0};

    std::cout << "Enter an amount in cents: ";
    std::cin >> cents;
    std::cout << std::endl;

    std::string ret = change(cents);
    std::cout << ret;



return 0;
}

