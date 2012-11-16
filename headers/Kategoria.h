#ifndef KATEGORIA_H
#define KATEGORIA_H
#include "Wydatek.h"
#include "Element.h"
#include <string>

using namespace std;

class Kategoria{
    string nazwa_;
    ElementListy* poczatekListyA_;
public:
    Kategoria (string nazwa);
    string getNazwa ();
    void wypiszWydatkiZKategorii (ostream& out);
    void dodajWydatek (Wydatek* w);
    Wydatek* znajdzNajtanszy (string produkt);
    friend ostream& operator<<(ostream& out, const Kategoria& k);

};


#endif
