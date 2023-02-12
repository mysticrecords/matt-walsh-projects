#include <iostream>
#include <string>

int main() {

    std::string input{};
    int point = 0;

    std::cout << "Enter a phrase for your letter pyramid"<< std::endl;

    std::getline(std::cin >> std::ws, input);

    while(point < input.length()) 
    {
        
        for(int j = input.length()-1; j >=0 ; --j) 
        {
            if(j > point) 
            {
                std::cout << " ";
            } 
            else 
            {
                std::cout <<input.at(point -j);
            }
        }

        for(int i = input.length()-1; i > 0; i--) 
        {
            if(i > point) 
            {
                std::cout << "";
            } 
            else 
            {
                std::cout << input.at(i-1);
            }
        }

        point++;
        std::cout << std::endl;
    }

    return 0;
}