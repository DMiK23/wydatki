#ifndef KALENDARZ_H
#define KALENDARZ_H
#include "Wydatek.h"
#include "Element.h"
#include "Data.h"

using namespace std;

class Kalendarz
{
    ElementListy* poczatekListy1_;
public:
    Kalendarz(); //ustawia root na NULL
    void dodajWydatek (Wydatek* w);
    ostream& wypiszWydatkiZOkresu (ostream& out, const Data& dataOd, const Data& dataDo);
};


#endif

