#include "MetodyPomocnicze.h"
#include <iostream>
#include <vector>
#ifndef UZYTKOWNIKMENEDZER_H
#define UZYTKOWNIKMENEDZER_H
#include <fstream>
#include "Uzytkownik.h"
#include <windows.h>
#include <sstream>
#include "PlikZUzytkownikami.h"


using namespace std;

class UzytkownikMenedzer{
    int idZalogowanegoUzytkownika;
    vector <Uzytkownik> uzytkownicy;
    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);
    PlikZUzytkownikami plikZUzytkownikami;
    MetodyPomocnicze metodyPomocnicze;




public:
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();

    void logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    int wylogujSie();
    int pobierzIdZalogowanegoUzytkownika();

    UzytkownikMenedzer(string NAZWA_PLIKU_Z_UZYTKOWNIKAMI):plikZUzytkownikami(NAZWA_PLIKU_Z_UZYTKOWNIKAMI){
        idZalogowanegoUzytkownika = 0;
        uzytkownicy = plikZUzytkownikami.wczytajUzytkownikowZPliku();
   };

     bool czyUzytkownikJestZalogowany();
};
#endif // UZYTKOWNIKMENEDZER_H


