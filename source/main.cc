#include "../headers/Zakupy.h"
#include <iostream>

using namespace std;

int main ()
{
cout << endl << "data:" << endl;
Data d1 (1, 1, 2000);
Data d2 (1, 12, 2000);
Data d3 (1, 6, 2000);
cout << d1 << endl << d2 << endl;
cout << d1.compare (d2) << " <-f1" << endl;
cout << endl << "wydatek:" << endl;
Wydatek chlep1 ("chlep", "bazar", 1, 120, d1);
cout << "gdzie? w " << chlep1.getSklep()<<endl;
cout << "kiedu? " << chlep1.getData()<<endl;
cout << "a za ile? " << chlep1.getCena()<<endl;
cout << "czyli razem? " <<chlep1<<endl;
cout << endl << "kategorie:" << endl;
Kategoria jedzenie ("jedzenie");
Kategoria chemia ("chemia");
cout << "kategorie:"<<endl;
cout << jedzenie.getNazwa() << endl << chemia.getNazwa() << endl;
Wydatek chlep2 ("chlep", "piekarnia", 1, 130, d2);
Wydatek chlep3 ("chlep", "zabka", 1, 110, d2);
Wydatek domestos ("domestos", "zabka", 1, 110, d3);
Wydatek proszek ("proszek", "bazar", 1, 110, d1);
Wydatek arbuz ("arbuz", "bazar", 2, 700, d2);
jedzenie.dodajWydatek (&chlep1);
jedzenie.dodajWydatek (&chlep2);
jedzenie.dodajWydatek (&chlep3);
jedzenie.dodajWydatek (&arbuz);
chemia.dodajWydatek (&proszek);
chemia.dodajWydatek (&domestos);
cout<< "najtanszy jest " << *(jedzenie.znajdzNajtanszy ("chlep"))<<endl;
cout << jedzenie << endl;//to wyrzuca smiec
cout << chemia << endl;//to wyrzuca smiec
cout << endl << "kalendarz:" << endl;
Kalendarz k1;
k1.dodajWydatek (&chlep1);
k1.dodajWydatek (&chlep2);
k1.dodajWydatek (&chlep3);
k1.dodajWydatek (&domestos);
k1.dodajWydatek (&proszek);
k1.dodajWydatek (&arbuz);
Data poczatek (0, 0, 0);
Data koniec (0, 0, 3000);
Data karola8 (15, 8, 2000);
Data primaaprilis (1, 4, 2000);
k1.wypiszWydatkiZOkresu (cout, poczatek, koniec)<<endl;
k1.wypiszWydatkiZOkresu (cout, primaaprilis, karola8)<<endl;

return 0;
}


