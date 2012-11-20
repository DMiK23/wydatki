#include "../headers/Zakupy.h"
#include "../headers/Data.h"
#include "../headers/Kalendarz.h"
#include "../headers/Kategoria.h"
#include <string>
#include <iostream>
using namespace std;

Zakupy::Zakupy() // tworzy liste kategorii
{
	iloscKategorii = 0;
}

void Zakupy::addWydatek (Wydatek* w, Kategoria* ka, Kalendarz* k_)
{
    ka->dodajWydatek (w);
	k_->dodajWydatek (w);	
}

bool Zakupy::addKategoria (string nk)
{
	if (iloscKategorii == MAX_KATEGORII)
		return false;
	kategorie_[iloscKategorii++] = Kategoria(nk);
	return true;
}

Kalendarz Zakupy::getKalendarz ()
{
		return kalendarz_;
}

Kategoria* Zakupy::getKategoria (int i)
{
	return &(kategorie_[i]);
}

ostream& operator << (ostream& out, const Zakupy z)
{
	for (int i = 0; i < z.iloscKategorii; i++)
	{
		out<< i << " " << z.kategorie_[i].getNazwa()<<endl;

	}
	return out;
}