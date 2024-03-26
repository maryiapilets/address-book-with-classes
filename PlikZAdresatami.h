#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H
#include <cstdlib>
#include "Adresat.h"
#include <fstream>
#include <iostream>
#include "MetodyPomocnicze.h"
#include <vector>

using namespace std;

class PlikZAdresatami
{
    int idOstatniegoAdresata;
    const string NAZWA_PLIKU_Z_ADRESATAMI;
    bool czyPlikJestPusty(fstream &plikTekstowy);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    void usunPlik(string nazwaPlikuZRozszerzeniem);
    void zmienNazwePliku(string staraNazwa, string nowaNazwa);


    public:
        bool dopiszAdresataDoPliku(Adresat adresat);
        PlikZAdresatami(string nazwaPlikuZAdresatami):NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami){};
        vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
        void ustawIdOstatniegoAdresata(int noweId);
         void usunAdresataZPliku(int idAdresata);
         int pobierzZPlikuIdOstatniegoAdresata();



};

#endif // PLIKZADRESATAMI_H
