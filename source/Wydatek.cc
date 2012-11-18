#include "../headers/Wydatek.h"
#include <string>
#include "../headers/Data.h"
#include <ostream>

using namespace std;


Wydatek::Wydatek ( string nazwa, string sklep, int ilosc, int cena, const Data& kiedy) : kiedy_(kiedy)
{
	nazwa_ = nazwa;
	sklep_ = sklep;
	ilosc_ = ilosc;
	cena_ = cena;
}

string Wydatek::getNazwa ()
{
	return nazwa_;
}

string Wydatek::getSklep ()
{
	return sklep_;
}

Data Wydatek::getData ()
{
	return kiedy_;
}

int Wydatek::getCena ()
{
    return cena_;
}

ostream& operator<<(ostream& out, const Wydatek& w)
{
	out<< w.nazwa_<< "; z "<< w.sklep_<< "; "<< w.ilosc_ << "; "<< w.cena_ << "zl; "<< w.kiedy_;
	return out;
}
