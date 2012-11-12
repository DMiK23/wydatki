#ifndef WYDATEK_H
#define WYDATEK_H
#include <string>
#include "Data.h"
#include "Kategoria.h"
using namespace std;

class Wydatek {
    string produkt_;
    int ilosc_;
    string sklep_;
    Data kiedy_;
    Kategoria rodzaj_;
    int cena;
public:
    operator<<(ostream & out); //czy to doda ten wydatek to listy "zakupy"?
};

#endif
