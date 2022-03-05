#ifndef PHONENUMBER_H
#define PHONENUMBER_H

#include <iostream>
using std::ostream;
using std::istream;

#include <string>

class PhoneNumber{
    friend ostream &operator<<(ostream &, const PhoneNumber & );
    friend istream &operator>>(istream &, PhoneNumber &);

    private:
        std::string areaCode;
        std::string exchange;
        std::string line;
};
#endif