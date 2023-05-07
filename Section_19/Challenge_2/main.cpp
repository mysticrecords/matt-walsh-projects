// Section 19
// Challenge 2
// Automated Grader
#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>

int scores = 0;
int iter = 0;
std::string line;
std::string name{};
std::string answers{};
std::string results{};
int nameWidth(20);
int resultsWidth(10);
int totalWidth(30);
int studentCount{0};
int totalScores{0};
    

int processResult(std::string answers, std::string result) {
        int count {0};

        for(int i =0; i < answers.length(); i++) {
            if(answers.at(i) == result.at(i)) {
                count++;
            }
        }

        return count;
    };

void footer(double scoreAverage) {
    std::cout << std::setw(totalWidth) << std::setfill('-') << "" << std::endl;
    std::cout << std::setfill(' ') << "";
    std::cout << std::setw(nameWidth) << std::left <<  "Average" 
    << std::setw(resultsWidth) << std::left << scoreAverage << std::endl;
};

void header(std::string col1, std::string col2) {
    std::cout << std::setw(nameWidth) << std::left << col1 
    << std::setw(resultsWidth) << std::left << col2 << std::endl;
    std::cout << std::setw(totalWidth) << std::setfill('-') << "" << std::endl;
    std::cout << std::setfill(' ') << "";
}




int main() {


    std::ifstream responses{"Challenge_2/responses.txt"};

    if(!responses) {
        std::cerr << "Error opening file" <<std::endl;
    } else {

        responses >> answers;

        // std::cout << answers << std::endl;

        header("Student", "Result");


        while(responses >> name >> results) {

            std::cout << std::setfill(' ') << std::setw(nameWidth) << std::left << name
            << std::setw(resultsWidth) << std::left << processResult(answers, results) << std::endl;
            studentCount++;
            totalScores += processResult(answers, results);

        }

        
        if(studentCount != 0) {
            double scoreAverage  = static_cast<double>(totalScores)/studentCount;
            footer(scoreAverage);
        }

    }

    
    responses.close();

    return 0;
}

