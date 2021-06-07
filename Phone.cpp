#include "../headers/Phone.h"

Phone::Phone() : telNumber("nieznany") {
    if (verbose) { cout << "  Dziala konstruktor klasy Phone bez parametru" << endl; }

}

Phone::Phone(const string &tel_number) : telNumber(tel_number) {
    if (verbose) { cout << "  Dziala konstruktor klasy Phone z arg. telNumber = " << tel_number << endl; }
}

Phone::~Phone() {
    if (verbose) { cout << "  Dziala destruktor klasy Phone bez parametru" << endl; }
}

const string &Phone::getTelNumber() const {
    return telNumber;
}

void Phone::setTelNumber(const string &telNumber) {
    Phone::telNumber = telNumber;
}


