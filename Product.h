#pragma once

#include <iostream>
#include "Date.h"

extern bool verbose;

using namespace std;
class Product: public Date {
    int id;
    string nazwaProduktu;
    string opisProduktu;
    string kategoria;
    int ilosc;

    // Date obsługuje datę produkcji lub przydatności
public:
    Product();

    Product(int dzien, int miesiac, int rok, int id,
            const string &nazwaProduktu, const string &opisProduktu, int ilosc, const string &kategoria);

    virtual ~Product();

    int getId() const;

    void setId(int id);

    const string &getNazwaProduktu() const;

    void setNazwaProduktu(const string &nazwaProduktu);

    const string &getOpisProduktu() const;

    void setOpisProduktu(const string &opisProduktu);

    int getIlosc() const;

    void setIlosc(int ilosc);

    const string &getKategoria() const;

    void setKategoria(const string &kategoria);
};
