#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class MyString {

    friend bool operator==(const MyString &lhs, const MyString &rhs);
    friend MyString operator-(const MyString &obj);
    friend MyString operator+(const MyString &lhs, const MyString &rhs);

    friend std::ostream &operator<<(std::ostream &os, const MyString &obj);
    friend std::istream &operator>>(std::istream &is, MyString &obj);

    friend bool operator==(const MyString &lhs, const MyString &rhs);
    friend bool operator!=(const MyString &lhs, const MyString &rhs);

    friend bool operator<(const MyString &lhs, const MyString &rhs);
    friend bool operator>(const MyString &lhs, const MyString &rhs);

    friend MyString operator+(const MyString &lhs, const MyString &rhs);
    friend MyString operator+=(const MyString &lhs, const MyString &rhs);

    friend MyString operator*(const MyString &obj, int times);
    friend MyString &operator*=(const MyString &obj, int times);

    private:
        char *str;

    public:
        MyString();
        MyString(const char *s);
        MyString(MyString &source);
        MyString(MyString &&source);
        ~MyString();

        //copy assignment operator
        MyString &operator=(const MyString &rhs);

        //move assignment operator
        MyString &operator=(MyString &&rhs);

        // MyString operator-() const;
        // MyString operator+(const MyString &rhs) const;
        // bool operator==(const MyString &rhs) const;

        void display() const;
        int get_length() const;
        const char *get_str() const;
};

#endif