#pragma once

#include <iostream>
#include "Person.h"

extern bool verbose;

using namespace std;

class Client: public Person {
    int id;
public:
    Client();

    Client(int id);

    Client(const string &imie, const string &nazwisko, const string &adres, const string &post_code, const string &city,
           int dzien, int miesiac, int rok, const string &tel_number, int id);

    virtual ~Client();

    int getId() const;

    void setId(int id);
};
