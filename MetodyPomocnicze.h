#include <iostream>
#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H


using namespace std;

class MetodyPomocnicze{

public:
    static string konwersjaIntNaString(int liczba);
    static string wczytajLinie();
    static string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    static int konwersjaStringNaInt(string liczba);
    static string pobierzLiczbe(string tekst, int pozycjaZnaku);
    static char wczytajZnak();
    static int wczytajLiczbeCalkowita();
};

#endif // METODYPOMOCNICZE_H
