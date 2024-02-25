#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt","Adresaci.txt");

   //ksiazkaAdresowa.rejestracjaUzytkownika();
   ksiazkaAdresowa.logowanieUzytkownika();
   ksiazkaAdresowa.wyswietlWszystkichAdresatow();
  //ksiazkaAdresowa.wylogujSie();
  ksiazkaAdresowa.dodajAdresata();


    return 0;
}
