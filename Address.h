#pragma once

#include <iostream>
extern bool verbose;
using namespace std;

class Address {
//protected:
    string adres;
    string post_code;
    string city;

public:
    Address();

    Address(const string &adres, const string &post_code, const string &city);

    virtual ~Address();

    const string &getAdress() const;

    void setAdress(const string &adres);

    const string &getPost_code() const;

    void setPost_code(const string &post_code);

    const string &getCity() const;

    void setCity(const string &city);
};