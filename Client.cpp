#include "../headers/Client.h"

Client::Client(): id(0) {
    if (verbose) { cout << "Dziala konstruktor klasy Client bez arg.\n"; }
}

Client::Client(int id) : id(id) {
    if (verbose) { cout << "Dziala konstruktor klasy Client z 1 arg.\n"; }
}

Client::Client(const string &imie, const string &nazwisko, const string &adres, const string &post_code,
               const string &city, int dzien, int miesiac, int rok, const string &tel_number, int id)
        : Person(imie, nazwisko, adres, post_code, city,
                 dzien, miesiac, rok, tel_number), id(id) {
    if (verbose) { cout << "Dziala konstruktor klasy Client z kompletem args.\n"; }
}

Client::~Client() {
    if (verbose) { cout << "Dziala destruktor klasy Client.\n"; }
}

int Client::getId() const {
    return id;
}

void Client::setId(int id) {
    Client::id = id;
}

