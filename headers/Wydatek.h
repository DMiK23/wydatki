#ifndef WYDATEK_H
#define WYDATEK_H
#include <string>
#include "Data.h"
using namespace std;

class Wydatek {
    string produkt_;
    string sklep_;
    int ilosc_;
    int cena_;
    Data kiedy_;

public:
    Wydatek ( string nazwa, string sklep, int ilosc, int cena, Data kiedy);
    string getSklep ();
    Data getData ();
    int getCena ();
    friend ostream& operator<<(ostream& out, const Wydatek& w);
};

#endif
