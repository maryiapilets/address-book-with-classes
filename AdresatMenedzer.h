#ifndef ADRESATMENEDZER_H_INCLUDED
#define ADRESATMENEDZER_H_INCLUDED
#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "MetodyPomocnicze.h"
#include <vector>
#include <fstream>

using namespace std;

class AdresatMenedzer{
    int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;
    MetodyPomocnicze metodyPomocnicze;
    Adresat podajDaneNowegoAdresata();
    string daneJednegoAdresataOddzielonePionowymiKreskami;

public:
    void ustawIdZalogowanegoUzytkownika(int noweIdUzytkownika);
    int dodajAdresata();
    AdresatMenedzer(string nazwaPlikuZAdresatami):plikZAdresatami(nazwaPlikuZAdresatami){

    idOstatniegoAdresata = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(adresaci,idZalogowanegoUzytkownika);};
    void wyswietlWszystkichAdresatow();
    void wczytajWszystkichUzytkownikowAdresataZPliku();





};


#endif // ADRESATMENEDZER_H_INCLUDED
