#include "menu.cc"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{

	Zakupy z;
	Kalendarz KALENDAR = z.getKalendarz();
	z.addKategoria ("spozywcze");
	z.addKategoria ("chemia");
	z.addKategoria ("biuro");
	z.addKategoria ("multimedia");
	//Data d1 (1, 1, 2000);
	//Wydatek w ( "jabko", "bazar", 1, 200, d1);
	//z.getKategoria(0)->dodajWydatek (&w);
	//cout << *(z.getKategoria(0)) << endl;
	do {}while (menu (z, KALENDAR) != 8);

return 0;
}


