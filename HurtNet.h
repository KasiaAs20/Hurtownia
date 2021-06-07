#pragma once

#include <iostream>
#include "Client.h"
#include "Address.h"
#include "Product.h"
#include "Phone.h"
#include <vector>
#include <algorithm>

extern bool verbose;

using namespace std;

class HurtNet: public Address, public Phone {
    string nazwa;
    string owner;
    Address adres;
    Phone telNumber;
    vector<Product> product;
    vector<Client> client;

public:
    HurtNet();

    HurtNet(const string &adres, const string &post_code, const string &city, const string &tel_number,
            const string &nazwa, const string &owner, const Address &adres1, const Phone &telNumber);

    virtual ~HurtNet();

    const string &getNazwa() const;

    void setNazwa(const string &nazwa);

    const string &getOwner() const;

    void setOwner(const string &owner);

    const Address &getAdres() const;

    void setAdres(const Address &adres);

    const Phone &getTelNumber() const;

    void setTelNumber(const Phone &telNumber);

    void addProduct(Product product);

    void delProduct(int id);

    void addClient(Client client);

    void delClient(int id);

    void printClients();

    void printProducts();

    void przyjecieTowaru(int product_id);

    void sprzedzzTowaru(int product_id, int client_id);

    void dostawaDlaKlienta(int client_id);

    int iloscKlientow();

    int iloscTowarow();  //Asortymentów, różnych towarów, a nie ilość szt.

    int findClient(string nazwisko);

    int findProduct(string nazwa);

};
