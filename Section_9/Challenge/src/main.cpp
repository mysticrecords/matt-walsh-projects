#include <iostream>
#include <string.h>
#include <vector>

std::string menu() {

    std::string menu = std::string("P - print numbers\nA - add a number\n") +
    std::string("M - display mean of the numbers") +
    std::string("\nS - display the smallest number\n") +
    std::string("L - display the largest number\nQ - quit\n") +
    std::string("\nEnter your choice:\n");

    return menu;
    
};

std::string printNumbers(std::vector<int> numVector) {
    std::string numb {""};
    for (int i: numVector) {
        numb += std::to_string(i) + " ";
    }

return numb;
};

int addNumber() {

    std::cout << "enter an integer" << std::endl;
    int num {};
    std::cin >> num;

    return num;

}



int main() {

    std::vector<int> numVector {1, 2, 3, 4, 5};

    char choice {' '};

    do {

        std::cout << menu();
        std::cin >> choice;

        switch(choice) {
            case 'p':
            case 'P':
                std::cout << printNumbers(numVector) << "\n" << std::endl;
                break;
            case 'a':
            case 'A':
                numVector.push_back(addNumber());
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
                choice ='q';
                break;
            default:
                std::cout <<"Unknown selection, please try again";
            
        }
        

    } while(choice != 'q' && choice != 'Q');

    

    return 0;
}