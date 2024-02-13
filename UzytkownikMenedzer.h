#include "MetodyPomocnicze.h"
#include <iostream>
#include <vector>
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
    void logowanieUzytkownika();

    UzytkownikMenedzer(string nazwaPlikuZUzytkownikami):plikZUzytkownikami(plikZUzytkownikami){};


};

