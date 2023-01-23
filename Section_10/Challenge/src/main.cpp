#include <iostream>
#include <string.h>

std::string encodetMsg(std::string msg) 
{

    std::string alphabet {" abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!.?"};
    std::string encoder {" ?MNB0V8CXZAS7DF1GHJKLQWERPO2IUYTqpwoi3ertyugh4fjdksl5azxm6n9cvb"};

    std::string encodeMsg {};

    for(size_t i = 0; i < msg.length(); i++) 
    {
        // std::cout << msg.at(i);
        for(size_t a = 0; a < alphabet.length(); a++) {
            if(msg.at(i) == alphabet.at(a)) {
                // std::cout << "*";
                encodeMsg += encoder.at(a);
                // std::cout << encoder.at(a);
            } else {}
            

        }
    }

    return encodeMsg;

}
    

std::string decodeMsg(std::string msg) 
{

    std::string alphabet {" abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!.?"};
    std::string encoder {" ?MNB0V8CXZAS7DF1GHJKLQWERPO2IUYTqpwoi3ertyugh4fjdksl5azxm6n9cvb"};
    std::string encodeMsg {};

    for(size_t i =0; i < msg.length(); i++) 
    {
        // std::cout << msg.at(i);
        for(size_t a = 0; a < encoder.length(); a++) {
            if(msg.at(i) == encoder.at(a)) {
                // std::cout << "*";
                encodeMsg += alphabet.at(a);
                // std::cout << encoder.at(a);
            } else {}
            

        }
    }

    return encodeMsg;
    
}

int main() 
{
    std::string secretMsg{};
    std::string choose {};
    std::cout << "Please enter your secret message to encode" << std::endl;
    getline(std::cin, secretMsg);

    std::cout << encodetMsg(secretMsg) << std::endl;

    std::cout << "would you like to decode your message? Y/N:" << std::endl;

    std::cin >> choose;

    if(choose.compare("y") || choose.compare("Y")) {
        std::cout << "your secret nessage reads:" << std::endl;
        std::cout <<(decodeMsg(encodetMsg(secretMsg))) << std::endl;
    } else if(choose.compare("n") || choose.compare("N")) {
        std::cout << "Well, I guess we'll never know what the message read" << std::endl;
    } 


    return 0;
}