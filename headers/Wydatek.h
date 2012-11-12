#ifndef WYDATEK_H
#define WYDATEK_H
#include <string>
#include "Data.h"
#include "Kategoria.h"
using namespace std;

class Wydatek {
    string produkt_;
    int ilosc_;
    string sklep_;
    Data kiedy_;
    Kategoria rodzaj_;
    int cena;
public:
    friend ostream& operator<<(ostream& out, const Wydatek& w); //czy to doda ten wydatek to listy "zakupy"?
	// nie, to wypisze Wydatek na strumien, badz to do pliku, badz to na konsole
};

#endif
