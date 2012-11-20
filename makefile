vpath %.h headers
vpath %.cc source

CXXFLAGS = -Wall

objects = Data.o Kalendarz.o Kategoria.o Wydatek.o Zakupy.o

all : main.o $(objects)
	g++ -o wydatki $(CXXFLAGS) $(objects) main.o

main.o : $(objects) menu.cc

$(objects) : Data.h

Zakupy.o : Kalendarz.h Kategoria.h Zakupy.h

Wydatek.o : Wydatek.h

Kategoria.o : Element.h Kategoria.h Wydatek.h

Kalendarz.o : Element.h Kalendarz.h Wydatek.h

clean :
	rm -f *.o
