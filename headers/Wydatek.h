#ifndef WYDATEK_H
#define WYDATEK_H
#include <string>
#include "Data.h"
#include <ostream>
using std::ostream;
using std::string;

class Wydatek {
    string produkt_;
    string sklep_;
    int ilosc_;
    int cena_;
    Data kiedy_;

public:
    Wydatek ( string nazwa, string sklep, int ilosc, int cena, const Data& kiedy);
    string getSklep ();
    Data getData ();
    int getCena ();
    friend ostream& operator<<(ostream& out, const Wydatek& w);
};

#endif
