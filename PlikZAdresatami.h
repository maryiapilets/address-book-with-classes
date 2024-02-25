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
    const string nazwaPlikuZAdresatami;
    bool czyPlikJestPusty(fstream &plikTekstowy);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);


    public:
        void dopiszAdresataDoPliku(Adresat adresat);
        PlikZAdresatami(string NAZWAPLIKUZADRESATAMI):nazwaPlikuZAdresatami(NAZWAPLIKUZADRESATAMI){};
        int wczytajAdresatowZalogowanegoUzytkownikaZPliku(vector <Adresat> &adresaci,int idZalogowanegoUzytkownika);

};

#endif // PLIKZADRESATAMI_H
