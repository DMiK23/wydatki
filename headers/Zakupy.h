#ifndef ZAKUPY_H
#define ZAKUPY_H
#include "Kalendarz.h"
#include "Kategoria.h"
#include "data.h"
#include <string>

class Zakupy {
    Kalendarz kalendarz_;
    Kategoria kategorie_[MAX_KATEGORII];
public:
    Zakupy(); // tworzy liste kategorii
    bool addWydatek (Wydatek* w);
    void wypiszWydatkiZOkresu (const Data& dataOd, const Data& dataDo);
    void wypiszWydatkiZKategorii ();
    void szukanieNajtanszychProduktow ();//bedzie dawal wybor kategorii, nazwy
}


#endif
