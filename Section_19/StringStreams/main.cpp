#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <limits>

int main() {

    std::string name {};
    int score {};
    double total {};

    std::istringstream iss{"Moe 100 12345.6"};

    iss >> name >> score >> total;
    std::cout << std::setw(10) << std::left << name 
            << std::setw(5) << std::left << score 
            << std::setw(10) << std::left << total 
            << std::endl;

    std::ostringstream oss {};
    oss << std::setw(10) << std::left << name 
        << std::setw(5) << std::left << score 
        << std::setw(10) << std::left << total
        << std::endl;
    std::cout << oss.str() << std::endl;


    // -------------------- Data Validation --------------------

    int value {};
    std::string input{};
    bool done = false;

    do {
        std::cout << "Enter an integer" << std::endl;
        std::cin >> input;
        std::istringstream ss {input};
        if(ss >> value) {
            done = true;
        } else {
            std::cout << "Sorry, that is not an integer" << std::endl;

            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    } while (!done);

    std::cout << "Integer entered successfully! Your Integer: " << value << std::endl;

    return 0;
}