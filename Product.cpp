#include "../headers/Product.h"

Product::Product() :Date(1, 1,1999), id(0), nazwaProduktu("bez nazwy"), opisProduktu("bez opisu"), ilosc(0) {
//    opis konstruktora
}

Product::Product(int dzien, int miesiac, int rok, int id,
                 const string &nazwaProduktu, const string &opisProduktu, int ilosc, const string &kategoria)
        : Date(dzien, miesiac, rok), id(id), nazwaProduktu(nazwaProduktu), opisProduktu(opisProduktu), ilosc(ilosc),
          kategoria(kategoria) {
    //opis konstruktora
}

Product::~Product() {
    // opis destructora
}

int Product::getId() const {
    return id;
}

void Product::setId(int id) {
    Product::id = id;
}

const string &Product::getNazwaProduktu() const {
    return nazwaProduktu;
}

void Product::setNazwaProduktu(const string &nazwaProduktu) {
    Product::nazwaProduktu = nazwaProduktu;
}

const string &Product::getOpisProduktu() const {
    return opisProduktu;
}

void Product::setOpisProduktu(const string &opisProduktu) {
    Product::opisProduktu = opisProduktu;
}

int Product::getIlosc() const {
    return ilosc;
}

void Product::setIlosc(int ilosc) {
    Product::ilosc = ilosc;
}

const string &Product::getKategoria() const {
    return kategoria;
}

void Product::setKategoria(const string &kategoria) {
    Product::kategoria = kategoria;
}
