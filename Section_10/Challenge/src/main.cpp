#include <iostream>
#include <string.h>

const std::string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!.? "};
const std::string encoder {"?MNB0V8CXZAS7DF1GHJKLQWERPO2IUYTqpwoi3ertyugh4fjdksl5azxm6n9cvb "};

std::string encodetMsg(std::string msg) 
{

    for(char i: msg) 
    {

    }

}
    

std::string decodeMsg(std::string msg) 
{
    
}

int main() 
{
    std::string secretMsg;
    std::cout << "Please enter your secret message to encode" << std:: endl;
    getline(cin, secretMsg);


    return 0;
}