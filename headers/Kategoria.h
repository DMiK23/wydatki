#ifndef KATEGORIA_H
#define KATEGORIA_H
// #include "Wydatek.h" <- to usuwamy
#include <string>

class Wydatek; // <- a tu uprzedzamy kompilator, ze taka klase deklarujemy.
// teraz powinno sie skompilowac pod warunkiem ze pierwszy kompilowany bedzie Kategoria.h, potem dopiero Wydatek.h

class Kategoria{
//    std::string nazwa_;
    Wydatek* wydatki_;
public:
    friend ostream& operator<<(ostream & out, Kategoria* kat); //wpisuje wydatki na ta kategorie
};


#endif
