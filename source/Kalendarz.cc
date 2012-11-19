#include "../headers/Kalendarz.h"
#include "../headers/Wydatek.h"
#include "../headers/Element.h"
#include "../headers/Data.h"
#include <iostream>
using namespace std;

Kalendarz::Kalendarz() //ustawia root na NULL
{
	poczatekListy1_ = NULL;
	cout<<"Kalendarz utworzony!"<<endl;
}

ElementListy* dodaj1 (ElementListy* e, Wydatek* w)
{
	if (e == NULL) {
		e = new ElementListy();
		e -> w = w;
		e -> nast = NULL;
		return e;
	} else {
		if (e->w->getData().compare(w->getData()) < 0){
			e->nast = dodaj1 (e->nast, w);
			return e;
		} else {
			ElementListy* nowy = new ElementListy ();
			nowy->w = w;
			nowy->nast = e;
			return nowy;
		}
	}
}

void Kalendarz::dodajWydatek (Wydatek* w)
{
	poczatekListy1_ = dodaj1 (poczatekListy1_, w);
}

void Kalendarz::wypiszWydatkiZOkresu (const Data& dataOd, const Data& dataDo)
{
	int c = 0;
	cout << endl << "Wydatki od " << dataOd << " do " << dataDo << endl;
	for (ElementListy* e = poczatekListy1_; e != NULL; e = e->nast)
	{
		if (e->w->getData().compare(dataOd) > 0 && e->w->getData().compare(dataDo) < 0)
		{
			cout << *(e->w) << endl;
			c += e->w->getCena();
		}
		if (e->w->getData().compare(dataDo) > 0)
			break;
	}
	cout << "w sumie: " << c << "gr" << endl;
}
