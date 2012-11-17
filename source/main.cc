#include "../headers/Zakupy.h"
#include <iostream>

using namespace std;

int main ()
{
cout << "max - "<< MAX_KATEGORII << endl;
Data d1 (1, 1, 2000);
Data d2 (1, 12, 2000);
cout << d1 << endl << d2 << endl;
cout << d1.compare (d2) << " <-f1" << endl;
Wydatek chlep1 ("chlep", "bazar", 1, 120, d1);
cout << "gdzie? w " << chlep1.getSklep()<<endl;
cout << "kiedu? " << chlep1.getData()<<endl;
cout << "a za ile? " << chlep1.getCena()<<endl;
cout << "czyli razem? " <<chlep1<<endl;
return 0;
}


