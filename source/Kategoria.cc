#include "../headers/Kategoria.h"
#include "../headers/Wydatek.h"
#include "../headers/Element.h"
#include <limits.h>
#include <string>
#include <ostream>
#include <iostream>

using std::ostream;


Kategoria::Kategoria ()
{

}

Kategoria::Kategoria (string nazwa)
 {
	nazwa_ = nazwa;
	poczatekListyA_ = NULL;
}

string Kategoria::getNazwa ()const
{
	return nazwa_;
}

ElementListy* dodaj (ElementListy* e, Wydatek* w)
{
	if (e == NULL) {
		e = new ElementListy();
		e -> w = w;
		e -> nast = NULL;
		return e;
	} else {
		if (e->w->getNazwa().compare (w->getNazwa()) < 0){
			e->nast = dodaj (e->nast, w);
			return e;
		} else {
			ElementListy* nowy = new ElementListy ();
			nowy->w = w;
			nowy->nast = e;
			return nowy;
		}
	}
}

void Kategoria::dodajWydatek (Wydatek* w)
{
	poczatekListyA_ = dodaj(poczatekListyA_, w);
	cout << "Dodano do kategorii " << nazwa_<< endl;
}

Wydatek* Kategoria::znajdzNajtanszy (string produkt)
{
	int najmniejsza = INT_MAX;
	Wydatek* najtanszy;
	for (ElementListy* e = poczatekListyA_; e != NULL; e = e->nast)
	{
		if (e->w->getNazwa() == produkt)
			if(najmniejsza > e->w->getCena())
			{
				najmniejsza = e->w->getCena();
				najtanszy = e->w;
			}
	}
	return najtanszy;
}

ostream& operator<<(ostream& out, const Kategoria& k)
{
	int c = 0;
	for (ElementListy* e = k.poczatekListyA_; e != NULL; e = e->nast)
	{
		out << *(e->w) << endl;
		c += e->w->getCena();
	}
	out << "W sumie za " << k.getNazwa() << ": " << c << "gr" << endl;
	return out;
}
