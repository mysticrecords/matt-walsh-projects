#include <iostream>
#include "MyString.h"

int main() {

    MyString empty;
    MyString larry("Larry");
    MyString stooge{larry};

    // larry = MyString{"a new person"};

    empty.display();
    larry.display();
    stooge.display();

    std::cout << "-----------------------------" << std::endl; 

    std::cout << (empty == larry) << std::endl;
    std::cout << (larry == larry) << std::endl;
    std::cout << (larry == stooge) << std::endl;

    std::cout << "-----------------------------" << std::endl;

    larry.display();
    MyString larry2 = -larry;
    larry2.display();

    MyString everyone = larry + " " + larry2 + " " + stooge+ " ";

    everyone.display();

    std::cout << "/" << larry;

    // std::cin >> empty;

    std::cout << empty;

    std::cout << "-----------------------------" << std::endl;

    std::cout << (larry == stooge) << std::endl;
    std::cout << (larry != stooge) << std::endl;
    std::cout << (larry != larry2) << std::endl;

    std::cout << "-----------------------------" << std::endl;

    MyString someone{"someone"};

    std::cout << larry << " < " << someone << std::endl;
    std::cout << (larry < someone) << std::endl;
    std::cout << larry << " > " << someone << std::endl;
    std::cout << (larry > someone) << std::endl;

    std::cout << "-----------------------------" << std::endl;

    MyString test {larry + someone};

    MyString test2{"ABCD"};
    test2 += someone;
    

     std::cout << test << std::endl;
     std::cout << test2 << std::endl;

     std::cout << test2 * 3 << std::endl;

     MyString another{"12345"};

     std::cout << test2 *= 2;

    

}