#include "../headers/Kalendarz.h"
#include "../headers/Wydatek.h"
#include "../headers/Element.h"
#include "../headers/Data.h"
#include <iostream>
using namespace std;

Kalendarz::Kalendarz() //ustawia root na NULL
{
	poczatekListy1_ = NULL;
	cout<<"Kalendarz utwprzony!"<<endl;
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
	/*
	 * ElementListy* pocz = poczatekListy1_;
	 * while (pocz != NULL && pocz->w->getData().compare(dataOd) < 0)
	 * 	pocz = pocz->nast;
	 * 
	 * */
	for (ElementListy* e = poczatekListy1_; e != NULL; e = e->nast)
	{
		if (e->w->getData().liczbaDni()>=dataOd.liczbaDni() && e->w->getData().liczbaDni() <= dataDo.liczbaDni())
			cout << *(e->w) << endl;
		c += e->w->getCena();
	}
	cout << "w sumie: " << c << endl;
 	//return out;
}
