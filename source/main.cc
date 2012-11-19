#include "../headers/Zakupy.h"
#include <iostream>

using namespace std;

int main ()
{
Data d1 (1, 1, 2000);
Data d2 (1, 12, 2000);
Data d3 (1, 6, 2000);
Data poczatek (0, 0, 0);
Data koniec (0, 0, 3000);
Data karola8 (15, 8, 2000);
Data primaaprilis (1, 4, 2000);

Wydatek chlep1 ("chlep", "bazar", 1, 120, d1);
Wydatek chlep2 ("chlep", "piekarnia", 1, 130, d2);
Wydatek chlep3 ("chlep", "zabka", 1, 110, d2);
Wydatek domestos ("domestos", "zabka", 1, 110, d3);
Wydatek proszek ("proszek", "bazar", 1, 110, d1);
Wydatek arbuz ("arbuz", "bazar", 2, 700, d2);

Kategoria jedzenie ("jedzenie");
Kategoria chemia ("chemia");

Zakupy z;

Kalendarz KALENDAR = z.getKalendarz();
z.addWydatek (&chlep1, &jedzenie, &KALENDAR);
z.addWydatek (&chlep2, &jedzenie, &KALENDAR);
z.addWydatek (&chlep3, &jedzenie, &KALENDAR);
z.addWydatek (&domestos, &chemia, &KALENDAR);
z.addWydatek (&proszek, &chemia, &KALENDAR);
z.addWydatek (&arbuz, &jedzenie, &KALENDAR);

cout << jedzenie;
cout << chemia;
cout<<"jest smak"<<endl;
KALENDAR.wypiszWydatkiZOkresu (poczatek, koniec);
KALENDAR.wypiszWydatkiZOkresu (poczatek, karola8);
cout<<"jest smak2"<<endl;
cout << "Najtanszy jest " << *(jedzenie.znajdzNajtanszy ("chlep"))<<endl;
cout << z <<endl;//nie wypisuje
cout<<"jest smak3"<<endl;
return 0;
}


