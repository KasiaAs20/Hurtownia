#pragma once

#include <iostream>
#include "Address.h"
#include "Date.h"
#include "Phone.h"
extern bool verbose;
using namespace std;

class Person: public Address, public Date, public Phone {
//protected:
    string imie;
    string nazwisko;
public:
    Person();

    Person(const string &imie, const string &nazwisko,
           const string &adres, const string &post_code, const string &city,
           int dzien, int miesiac, int rok,
           const string &tel_number);

    virtual ~Person();

    const string &getImie() const;

    void setImie(const string &imie);

    const string &getNazwisko() const;

    void setNazwisko(const string &nazwisko);
};


