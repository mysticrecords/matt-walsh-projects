// Section 19
// Challenge 3
// Word counter
#include <iostream>
#include <fstream>
#include <vector>

std::string word_read {};
std::string word_to_find {};
int word_count {0};
int found_count {0};

bool find_substring(const std::string& word_to_find, const std::string& word_read) {
    std::size_t found = word_read.find(word_to_find);

    if(found == std::string::npos) 
        return false;
    else 
        return true;

};

int main() {

    std::ifstream in_file {"Challenge_3/romeoandjuliet.txt"};

    std::cout << "Enter a word to find in the text: ";
    std::cin >> word_to_find;

    if(!in_file) {
        std::cerr << "Error opening file" << std::endl;
    } else {
        while(in_file >> word_read) {
            word_count++;

            if(find_substring(word_to_find, word_read)) {
                found_count++;
            }


        }
    }

    std::cout << "Searched " << word_count << " words" << std::endl;
    std::cout << "The substring " << word_to_find << " was found " << found_count << " times...." << std::endl;

    return 0;
}

