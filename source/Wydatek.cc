#include "../headers/Wydatek.h"
#include <string>
#include "../headers/Data.h"
#include <ostream>
using std::ostream;


Wydatek::Wydatek ( string nazwa, string sklep, int ilosc, int cena, const Data& kiedy) : kiedy_(kiedy)
{

}

string Wydatek::getSklep ()
{
	return NULL;
}

Data Wydatek::getData ()
{
	return Data(0, 0, 0);
}

int Wydatek::getCena ()
{
    return 0;
}

ostream& operator<<(ostream& out, const Wydatek& w)
{
	return out;
}
