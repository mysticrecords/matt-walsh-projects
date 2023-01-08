#include <iostream>

std::string menu() {

    std::string menu = std::string("P - print numbers\nA - add a number\n") +
    std::string("M - display mean of the numbers") +
    std::string("\nS - display the smallest number\n") +
    std::string("L - display the largest number\nQ - quit\n") +
    std::string("\nEnter your choice:\n");

    return menu;
    
};

// std::char menuSelect(char choice) {

//     return choice;
    
// }

int main() {

    char choice {' '};

    do {

        std::cout << menu();
        std::cin >> choice;

        switch(choice) {
            case 'p':
            case 'P':
                //printNumbers();
                break;
            case 'a':
            case 'A':
                //addNumber();
                break;
            case 'm':
            case 'M':
                //meanNum();
                break;
            case 's':
            case 'S':
                //smallNum();
                break;
            case 'l':
            case 'L':
                //lrgNum();
                break;
            case 'q':
            case 'Q':
                std::cout <<"Thank you for using the numbers app";
                break;
            default:
                std::cout <<"Unknown selection, please try again";
            
        }
        

    } while(choice != 'q');

    

    return 0;
}