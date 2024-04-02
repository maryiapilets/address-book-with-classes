#ifndef ADRESATMENEDZER_H_INCLUDED
#define ADRESATMENEDZER_H_INCLUDED
#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "MetodyPomocnicze.h"
#include "Menu.h"
#include <vector>
#include <fstream>

using namespace std;

class AdresatMenedzer {
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;

    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;
    MetodyPomocnicze metodyPomocnicze;
    Adresat podajDaneNowegoAdresata();
    string daneJednegoAdresataOddzielonePionowymiKreskami;
    int podajIdWybranegoAdresata();
    void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);

    int zwrocNumerLiniiSzukanegoAdresata(int idAdresata);


public:
    void ustawIdZalogowanegoUzytkownika(int noweIdUzytkownika);
    int dodajAdresata();
    AdresatMenedzer(string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika):
        plikZAdresatami(nazwaPlikuZAdresatami),ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika) {
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    };
    void wyswietlWszystkichAdresatow();
    int usunAdresata();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
    void edytujAdresata();
};


#endif // ADRESATMENEDZER_H_INCLUDED
