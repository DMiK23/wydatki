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
	do {}while (menu (z, KALENDAR) != 8);

return 0;
}


