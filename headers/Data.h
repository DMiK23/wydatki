#ifndef DATA_H
#define DATA_H
#include <iostream>

class Data{
    int dzien_;
    int miesiac_;
    int rok_;
public:
    void dodaj (int x, int y, int z); // a to nie powinien byæ konstruktor?
	// Data(int d, int m, int y);  - plus pewnie jakas metoda:
	// int compareTo(Data d); - zwraca 0 jesli daty s¹ te same, itp.
};

#endif
