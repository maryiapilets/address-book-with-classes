#ifndef ADRESATMENEDZER_H_INCLUDED
#define ADRESATMENEDZER_H_INCLUDED
#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "MetodyPomocnicze.h"
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


public:
    void ustawIdZalogowanegoUzytkownika(int noweIdUzytkownika);
    int dodajAdresata();
    AdresatMenedzer(string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika):
        plikZAdresatami(nazwaPlikuZAdresatami),ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika) {
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    };
    void wyswietlWszystkichAdresatow();
    int usunAdresata();
    int podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(int idUsuwanegoAdresata, int idOstatniegoAdresata);
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();




};


#endif // ADRESATMENEDZER_H_INCLUDED
