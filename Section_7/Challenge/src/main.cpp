#include <iostream>
#include <vector>

int main() {

    std::vector <char> vowels {'a', 'e', 'i', 'o', 'u'};

    char vowel[5] = {'a', 'e', 'i', 'o', 'u'};

    std::cout << vowel[1]
    << vowels.at(2)
    << vowels.size()
    << std::endl;



return 0;
}