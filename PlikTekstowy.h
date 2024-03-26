#ifndef PLIKTEKSTOWY_H
#define PLIKTEKSTOWY_H
#include <iostream>
#include <fstream>
using namespace std;

class PlikTekstowy
{
     const string NAZWA_PLIKU;
    public:
        bool czyPlikJestPusty(fstream &plikTekstowy);
        string pobierzNazwePliku();
        PlikTekstowy(string nazwaPliku) : NAZWA_PLIKU(nazwaPliku) {
    }

};

#endif // PLIKTEKSTOWY_H
