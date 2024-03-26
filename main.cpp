#include <iostream>
#include "KsiazkaAdresowa.h"
#include "Menu.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt","Adresaci.txt");

   //ksiazkaAdresowa.rejestracjaUzytkownika();

   //ksiazkaAdresowa.wyswietlWszystkichAdresatow();
  //ksiazkaAdresowa.wylogujSie();
  //ksiazkaAdresowa.dodajAdresata();
  // vector <Uzytkownik> uzytkownicy;
  //  vector <Adresat> adresaci;

    int idOstatniegoAdresata = 0;
    int idUsunietegoAdresata = 0;
    char wybor;
    Menu menu;

    while (true)
    {
        if (ksiazkaAdresowa.pobierzIdZalogowanegoUzytkownika() == 0)
        {
            wybor = menu.wybierzOpcjeZMenuGlownego();

            switch (wybor)
            {
            case '1':
               ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                ksiazkaAdresowa.logowanieUzytkownika();
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        }
        else
        {

            //if (adresaci.empty() == true)
                // Pobieramy idOstatniegoAdresata, po to aby zoptymalizowac program.
                // Dzieki temu, kiedy uztykwonik bedzie dodawal nowego adresata
                // to nie bedziemy musieli jeszcze raz ustalac idOstatniegoAdresata
               // idOstatniegoAdresata = wczytajAdresatowZalogowanegoUzytkownikaZPliku(adresaci, idZalogowanegoUzytkownika);

            wybor = menu.wybierzOpcjeZMenuUzytkownika();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.dodajAdresata();
                break;
            case '2':
                ksiazkaAdresowa.wyszukajPoImieniu();
                break;
            case '3':
                ksiazkaAdresowa.wyszukajPoNazwisku();
                break;
            case '4':
                ksiazkaAdresowa.wyswietlWszystkichAdresatow();
                break;
            case '5':
                idUsunietegoAdresata =ksiazkaAdresowa.usunAdresata();
                idOstatniegoAdresata = ksiazkaAdresowa.podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(idUsunietegoAdresata, idOstatniegoAdresata);
                break;
            case '6':
                //edytujAdresata(adresaci);
                break;
            case '7':
                ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
            case '8':
                ksiazkaAdresowa.wylogujSie();
                break;
            }
        }
    }


    return 0;
}
