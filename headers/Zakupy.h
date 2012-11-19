#ifndef ZAKUPY_H
#define ZAKUPY_H
#include "Kalendarz.h"
#include "Kategoria.h"
#include "Data.h"
#include <string>
#define MAX_KATEGORII 10

class Zakupy {
    Kalendarz kalendarz_;
    Kategoria kategorie_[MAX_KATEGORII];
	int iloscKategorii;
public:
    Zakupy(); // tworzy liste kategorii
    void addWydatek (Wydatek* w);
	bool addKategoria (string nk);
    void wypiszWydatkiZOkresu (const Data& dataOd, const Data& dataDo);
    void wypiszWydatkiZKategorii ();
    void szukanieNajtanszychProduktow ();//bedzie dawal wybor kategorii, nazwy
};


#endif
