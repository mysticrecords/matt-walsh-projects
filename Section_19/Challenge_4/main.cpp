// Section 19
// Challenge 4
// Copy Romeo and Juliet with line numbers
#include <iostream>
#include <fstream>

int main() {

    std::ifstream in_file {"Challenge_4/romeoandjuliet.txt"};
    std::ofstream out_file {"Challenge_4/romeoandjuliet_lineno.txt"};

    if(!in_file) {
        std::cerr << "Error opening file" << std::endl;
        return 1;
    }

    if(!out_file) {
        std::cerr << "Error writing to file" <<std::endl;
        return 1;
    }

    std::string line {};
    int lineNo {0};

    while(getline(in_file, line)) {
        if(line.length () > 1) {
            ++lineNo;
            out_file << std::setw(10) << std::left << lineNo << line;
        } else {
            out_file << std::endl;
        }
        
    }

    in_file.close();
    out_file.close();
    
    return 0;
}

