#ifndef ZAKUPY_H
#define ZAKUPY_H
#include "Wydatek.h"
#include <string>

class Zakupy {
    Kalendarz&;
    Kategoria* kategorie_;
public:
    bool addWydatek (Wydatek& w);
    void wypiszWydatkiZOkresu (const Data& dataOd, const Data& dataDo);
    void znajdzNajtanszy ();//bedzie dawal wybor kategorii, nazwy
}


#endif
