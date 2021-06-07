#pragma once

#include <iostream>

extern bool verbose;

using namespace std;

class Date {
//protected:
    int dzien;
    int miesiac;
    int rok;

public:
    Date();

    Date(int dzien, int miesiac, int rok);

    virtual ~Date();

    int getDzien() const;

    void setDzien(int dzien);

    int getMiesiac() const;

    void setMiesiac(int miesiac);

    int getRok() const;

    void setRok(int rok);

};
