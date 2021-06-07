#include "../headers/HurtNet.h"

HurtNet::HurtNet() {}

HurtNet::HurtNet(const string &adres, const string &post_code, const string &city, const string &tel_number,
                 const string &nazwa, const string &owner, const Address &adres1, const Phone &telNumber) : Address(
        adres, post_code, city), Phone(tel_number), nazwa(nazwa), owner(owner), adres(adres1), telNumber(telNumber) {

}

HurtNet::~HurtNet() {

}

const string &HurtNet::getNazwa() const {
    return nazwa;
}

void HurtNet::setNazwa(const string &nazwa) {
    HurtNet::nazwa = nazwa;
}

const string &HurtNet::getOwner() const {
    return owner;
}

void HurtNet::setOwner(const string &owner) {
    HurtNet::owner = owner;
}

const Address &HurtNet::getAdres() const {
    return adres;
}

void HurtNet::setAdres(const Address &adres) {
    HurtNet::adres = adres;
}

const Phone &HurtNet::getTelNumber() const {
    return telNumber;
}

void HurtNet::setTelNumber(const Phone &telNumber) {
    HurtNet::telNumber = telNumber;
}

void HurtNet::addProduct(Product product) {
    HurtNet::product.push_back(product);
};
// można napisać wersję zwracającą bool,
// true jak się uda, false jak wystapi błąd
// w zaawansowanych programach, podobnie jak w SQL zwraca id wstawionego, jak błąd to 0

void HurtNet::delProduct(int id) {};

void HurtNet::addClient(Client client) {
    HurtNet::client.push_back(client);
};

void HurtNet::delClient(int id) {};

void HurtNet::printClients() {
    // Iteruje po wartościach w vectorze i wypisuje je
    for(Client n : HurtNet::client) {
        std::cout << n.getId() << ", " << n.getNazwisko() << '\n';
    }
};

void HurtNet::printProducts() {
    // Iteruje po wartościach w vectorze i wypisuje je
    for(Product n : HurtNet::product) {
        std::cout << n.getId() << ", " << n.getNazwaProduktu() << '\n';
    }
};

void HurtNet::przyjecieTowaru(int product_id){};

void HurtNet::sprzedzzTowaru(int product_id, int client_id) {};

void HurtNet::dostawaDlaKlienta(int client_id) {};

int HurtNet::iloscKlientow() {
    return client.size();
};

int HurtNet::iloscTowarow() {
    return product.size();
};

int HurtNet::findClient(string nazwisko) {
    for(Client n : HurtNet::client) {
        if (n.getNazwisko() == nazwisko) {
            return n.getId();
        } else {
            return -1;
        }
    }
};

int HurtNet::findProduct(string nazwa) {
    for(Product n : HurtNet::product) {
        if (n.getNazwaProduktu() == nazwa) {
            return n.getId();
        } else {
            return -1;
        }
    }
};