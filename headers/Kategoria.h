#ifndef KATEGORIA_H
#define KATEGORIA_H
#include "Wydatek.h"
#include "Element.h"
#include <string>

using namespace std;

class Kategoria{
    string nazwa_;
    ElementListy elementListyA_;
public:
    string getNazwa ();
    ElementListy getRoot ();
    void wypiszWydatkiZKategorii (elementListyA_)
};


#endif
