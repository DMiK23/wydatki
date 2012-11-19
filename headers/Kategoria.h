#ifndef KATEGORIA_H
#define KATEGORIA_H
#include "Wydatek.h"
#include "Element.h"
#include <string>
#include <ostream>
using std::ostream;


class Kategoria{
    string nazwa_;
    ElementListy* poczatekListyA_;
public:
    Kategoria();
    Kategoria (string nazwa);
    string getNazwa ();
    void dodajWydatek (Wydatek* w);
    Wydatek* znajdzNajtanszy (string produkt);
    friend ostream& operator<<(ostream& out, const Kategoria& k);

};


#endif
