#pragma once

#include <iostream>
extern bool verbose;
using namespace std;

class Phone {
//protected:
    string telNumber;

public:
    Phone();

    Phone(const string &tel_number);

    virtual ~Phone();

    const string &getTelNumber() const;

    void setTelNumber(const string &telNumber);
};

