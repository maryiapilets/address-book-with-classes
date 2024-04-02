#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H
#include <cstdlib>
#include "Adresat.h"
#include <fstream>
#include <iostream>
#include "MetodyPomocnicze.h"
#include <vector>
#include "PlikTekstowy.h"

using namespace std;

class PlikZAdresatami: public PlikTekstowy {

    int idOstatniegoAdresata;
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    void usunPlik(string nazwaPlikuZRozszerzeniem);
    void zmienNazwePliku(string staraNazwa, string nowaNazwa);
    int zwrocNumerLiniiSzukanegoAdresata(int idAdresata);
    void edytujWybranaLinieWPliku(int numerEdytowanejLinii, string liniaZDanymiAdresataOddzielonePionowymiKreskami);
    string nazwaTymczasowegoPlikuZAdresatami = "AdresaciTymczasowe.txt";


public:
    bool dopiszAdresataDoPliku(Adresat adresat);
    PlikZAdresatami(string nazwaPliku):PlikTekstowy(nazwaPliku) {};
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    void usunAdresataZPliku(int idAdresata);
    int pobierzZPlikuIdOstatniegoAdresata();
    int podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(int idUsuwanegoAdresata, int idOstatniegoAdresata);
    void zaktualizujDaneWybranegoAdresata(Adresat adresat, int idEdytowanegoAdresata);

};

#endif // PLIKZADRESATAMI_H
