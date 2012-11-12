#ifndef KATEGORIA_H
#define KATEGORIA_H
#include "Wydatek.h"
#include <string>

class Kategoria{
//    std::string nazwa_;
    Wydatek* wydatki_;
public:
    friend ostream& operator<<(ostream & out, Kategoria* kat); //wpisuje wydatki na ta kategorie
};


#endif
