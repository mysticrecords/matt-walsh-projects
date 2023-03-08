#include <cstring>
#include <iostream>
#include "MyString.h"

MyString::MyString() 
: str{nullptr} {
    str =new char[1];
    *str ='\0';

}

MyString::MyString(const char *s) 
: str{nullptr} {
    if(s ==nullptr) {
        str =new char[1];
        *str ='\0';
    } else {
        str=new char[std::strlen(s)+1];
        std::strcpy(str, s);
    }
}

MyString::MyString(MyString &source) 
: str{nullptr} {
    str = new char[std::strlen(source.str)+1];
    std::strcpy(str, source.str);
}

MyString::~MyString() {
    delete [] str;
}

MyString &MyString::operator=(const MyString &rhs) {
    std::cout << "copy assignment overload" << std::endl;
    if(this == &rhs) {
        return *this;
        delete [] this->str;
    }
    
    str = new char[std::strlen(rhs.str)+1];
    std::strcpy(this->str, rhs.str);
    return *this;
}

// bool operator==(const MyString &lhs, const MyString &rhs) {
//     return (std::strcmp(lhs.str, rhs.str));
// }

MyString operator-(const MyString &obj) {
    char *buff = new char[std::strlen(obj.str) +1];
    std::strcpy(buff, obj.str);
    
    for(size_t i = 0; i < std::strlen(buff); i++) 
    buff[i] = std::tolower(buff[i]);
    MyString temp {buff};
    delete [] buff;
    return temp;

}

MyString operator+(const MyString &lhs, const MyString &rhs) {
    char *buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, lhs.str);
    std::strcat(buff, rhs.str);
    MyString temp {buff};
    delete [] buff;
    return temp;
}

MyString operator+=(const MyString &lhs, const MyString &rhs) {
    return std::strcat(lhs.str, rhs.str);
}

MyString operator*(const MyString &obj, int times) {
    
    MyString temp;
    for(int i = 0; i < times; i++) {
        temp = temp + obj;
    }
    
    return temp;
}

MyString &operator*=(MyString &obj, int times) {
    obj = obj * times;
    return obj;
}


// MyString operator+(const MyString &lhs, const MyString &rhs) {
//     char *buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
//     std::strcpy(buff, lhs.str);
//     std::strcat(buff, rhs.str);

//     MyString temp {buff};
//     delete [] buff;
//     return temp;
// }

MyString &MyString::operator=(MyString &&rhs) {
    std::cout << "move assignment over load" << std::endl;
    if(this == &rhs)
    return *this;
    delete [] this->str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;

}

std::ostream &operator<<(std::ostream &os, const MyString &obj) {
    os << obj.str;
    return os;
}

std::istream &operator>>(std::istream &is, MyString &obj) {
    char *buff = new char[1000];
    is >> buff;
    obj = MyString(buff);
    delete [] buff;
    return is;
}

bool operator==(const MyString &lhs, const MyString &rhs) {
    return (std::strcmp(lhs.str, rhs.str) == 0);
}

bool operator!=(const MyString &lhs, const MyString &rhs) {
    return (std::strcmp(lhs.str, rhs.str) != 0);
}

bool operator<(const MyString &lhs, const MyString &rhs) {
    return (std::strcmp(lhs.str, rhs.str) < 0);
}

bool operator>(const MyString &lhs, const MyString &rhs) {
    return (std::strcmp(lhs.str, rhs.str) > 0);
}

// MyString MyString::operator-() const {
//     char *buff = new char[std::strlen(str) +1];
//     std::strcpy(buff, str);

//     for(size_t i = 0; i < std::strlen(buff); i++) 
//         buff[i] = std::tolower(buff[i]);
    
//     MyString temp{buff};
//     delete [] buff;
//     return temp;
// }

// MyString MyString::operator+(const MyString &rhs) const {

//     char *buff = new char[std::strlen(this->str) + std::strlen(rhs.str) + 1];
//     std::strcpy(buff, this->str);
//     std::strcat(buff, rhs.str);
//     MyString temp {buff};
//     delete [] buff;
//     return temp;
// }

// bool MyString::operator==(const MyString &rhs) const {
//     return (std::strcmp(str, rhs.str) == 0);

// }

const char *MyString::get_str() const { return str;}

int MyString::get_length() const { return std::strlen(str);}

void MyString::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}