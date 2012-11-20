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
    void addWydatek (Wydatek* w, Kategoria* ka, Kalendarz* k_);
	bool addKategoria (string nk);
	Kalendarz getKalendarz ();
	Kategoria getKategoria (int i);
	friend ostream& operator << (ostream& out, const Zakupy z);
// 	void wypiszWydatkiZOkresu (const Data& dataOd, const Data& dataDo);
//     void wypiszWydatkiZKategorii ();
//     void szukanieNajtanszychProduktow ();
};


#endif
