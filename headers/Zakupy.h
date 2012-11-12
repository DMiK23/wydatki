#ifndef ZAKUPY_H
#define ZAKUPY_H
#include "Wydatek.h"
#include <string>

class Zakupy {
    Wydatek* wydatki_;
    int liczbaWydatkow_;
    int limitLiczyWydatkow_;
    Kategoria* kategorie_;
public:
    void dodajWydatek (Wydatek* wydatek_); //czy to powinno byc tu czy w "wtdatek"? czy moze to uzywa "<<"?
    void wypiszZOkresu (const Data& dataOd, const Data& dataDo);
    void znajdzNajtanszy (ostream & out, Wydatek* wyd);
}


#endif
