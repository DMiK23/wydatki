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
}

ostream& Kategoria::wypiszWydatkiZKategorii (ostream& out)
{
	for (ElementListy* e = poczatekListyA_, e->nast == NULL, e = e->nast)
	{
		out << e->w->getNazwa << e->w->getCena << endl;
		int c = 0;
		c = c + e->w.getCena;
	}
	out << c << endl;
 	return out;
}

Wydatek* Kategoria::znajdzNajtanszy (string produkt)
{
	int najmniejsza = 99999999999999999999999;
	Wydatek* najtanszy;
	for (ElementListy* e = poczatekListyA_, e->nast == NULL; e = e->nast)
	{
		if (e->nazwa_ == produkt)
			if(najmniejsza > e->w->cena_)
			{
				najmniejsza = e->w->cena_;
				najtanszy = e->w;
			}
	}
	return najtanszy;
}

ostream& operator<<(ostream& out, const Kategoria& k)
{
	out << k.wypiszWydatkiZKategorii (ostream& out, ElementListy* poczatekListyA_);
	return out;
}
