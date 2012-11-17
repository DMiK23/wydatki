#include "../headers/Kategoria.h"
#include "../headers/Wydatek.h"
#include "../headers/Element.h"
#include <string>
#include <ostream>

using std::ostream;


Kategoria::Kategoria ()
{

}

Kategoria::Kategoria (string nazwa)
{
	nazwa_ = nazwa;
	poczatekListyA_ = NULL;
}

string Kategoria::getNazwa ()
{
	return nazwa_;
}

ElementListy* dodaj (ElementListy* e, Wydatek* w)
{
	//if (e->w == NULL) {
		
}

void Kategoria::dodajWydatek (Wydatek* w)
{
	poczatekListyA_ = dodaj(poczatekListyA_, w);
}

void Kategoria::wypiszWydatkiZKategorii (ostream& out)
{

}

Wydatek* Kategoria::znajdzNajtanszy (string produkt)
{
	return NULL;
}

ostream& operator<<(ostream& out, const Kategoria& k)
{
	return out;
}
