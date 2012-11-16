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

}

string Kategoria::getNazwa ()
{
	return NULL;
}

void Kategoria::wypiszWydatkiZKategorii (ostream& out)
{

}

void Kategoria::dodajWydatek (Wydatek* w)
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
