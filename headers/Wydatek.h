#ifndef WYDATEK_H
#define WYDATEK_H
#include <string>
#include "Data.h"
#include <ostream>

using namespace std;

class Wydatek {
    string nazwa_;
    string sklep_;
    int ilosc_;
    int cena_;
    Data kiedy_;

public:
    Wydatek ( string nazwa, string sklep, int ilosc, int cena, const Data& kiedy);
    string getNazwa ();
	string getSklep ();
    Data getData ();
    int getCena ();
	int getIlosc ();
    friend ostream& operator<<(ostream& out, const Wydatek& w);
};

#endif
