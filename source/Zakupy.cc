#include "../headers/Zakupy.h"
#include "../headers/Data.h"
#include "../headers/Kalendarz.h"
#include "../headers/Kategoria.h"
#include <string>

Zakupy::Zakupy() // tworzy liste kategorii
{
	iloscKategorii = 0;
}

void Zakupy::addWydatek (Wydatek* w)
{
    
}

bool Zakupy::addKategoria (string nk)
{
	if (iloscKategorii == MAX_KATEGORII)
		return false;
	kategorie_[iloscKategorii++] = Kategoria(nk);
	return true;
}

void Zakupy::wypiszWydatkiZOkresu (const Data& dataOd, const Data& dataDo)
{

}

void Zakupy::wypiszWydatkiZKategorii ()
{

}

void Zakupy::szukanieNajtanszychProduktow ()//bedzie dawal wybor kategorii, nazwy
{

}
