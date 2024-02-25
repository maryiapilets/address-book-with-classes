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
    void wczytajUzytkownikowZPliku();
    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    int wylogujSie();
    int pobierzIdZalogowanegoUzytkownika();

    UzytkownikMenedzer(string nazwaPlikuZUzytkownikami):plikZUzytkownikami(nazwaPlikuZUzytkownikami){};


};
#endif // UZYTKOWNIKMENEDZER_H


