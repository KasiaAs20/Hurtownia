#include "../headers/Address.h"

Address::Address()
        : adres("nieznany"), post_code("nieznany"), city("nieznane") {
    if (verbose) {cout << "Dziala konstruktor klasy Address bez args.\n";}
}

Address::Address(const string &adres, const string &post_code, const string &city)
        : adres(adres), post_code(post_code), city(city) {
    if (verbose) {cout << "Dziala konstruktor klasy Address z 3 args.\n";}
}

Address::~Address() {
    if (verbose) {cout << "Dziala destruktor klasy Address.\n";}
}

const string &Address::getAdres() const {
    return adres;
}

void Address::setAdres(const string &adres) {
    Address::adres = adres;
}

const string &Address::getPost_code() const {
    return post_code;
}

void Address::setPost_code(const string &post_code) {
    Address::post_code = post_code;
}

const string &Address::getCity() const {
    return city;
}

void Address::setCity(const string &city) {
    Address::city = city;
}
