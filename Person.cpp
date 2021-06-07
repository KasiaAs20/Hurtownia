#include "../headers/Person.h"

Person::Person() : imie("nieznane"), nazwisko("nieznane"),
                   Address(), Date(), Phone() {
    if (verbose) { cout << "Dziala konstruktor klasy Person bez arg.\n"; }
}

Person::Person(const string &imie, const string &nazwisko, const string &adres, const string &post_code,
               const string &city, int dzien, int miesiac, int rok,
               const string &tel_number)
        : imie(imie), nazwisko(nazwisko),
          Address(adres, post_code, city),
          Date(dzien, miesiac, rok),
          Phone(tel_number) {
    if (verbose) { cout << "Dziala konstruktor klasy Person z kompletem args.\n"; }
}

Person::~Person() {
    if (verbose) { cout << "Dziala konstruktor klasy Person bez arg.\n"; }
}

const string &Person::getImie() const {
    return imie;
}

void Person::setImie(const string &imie) {
    Person::imie = imie;
}

const string &Person::getNazwisko() const {
    return nazwisko;
}

void Person::setNazwisko(const string &nazwisko) {
    Person::nazwisko = nazwisko;
}
