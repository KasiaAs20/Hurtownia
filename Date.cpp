#include "../headers/Date.h"

Date::Date() : dzien(1), miesiac(1), rok(2000)  {
    if (verbose) {cout << "Dziala konstruktor klasy Date bez args.\n";}
}

Date::Date(int dzien, int miesiac, int rok) : dzien(dzien), miesiac(miesiac), rok(rok) {
    if (verbose) {cout << "Dziala konstruktor klasy Date z 3 args.\n";}
}

Date::~Date() {
    if (verbose) {cout << "Dziala destruktor klasy Date.\n";}
}

int Date::getDzien() const {
    return dzien;
}

void Date::setDzien(int dzien) {
    Date::dzien = dzien;
}

int Date::getMiesiac() const {
    return miesiac;
}

void Date::setMiesiac(int miesiac) {
    Date::miesiac = miesiac;
}

int Date::getRok() const {
    return rok;
}

void Date::setRok(int rok) {
    Date::rok = rok;
}


