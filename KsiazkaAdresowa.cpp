#include "KsiazkaAdresowa.h"


void KsiazkaAdresowa::rejestracjaUzytkownika(){
    uzytkownikMenedzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow(){
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

int KsiazkaAdresowa::logowanieUzytkownika(){
    uzytkownikMenedzer.logowanieUzytkownika();
    if(uzytkownikMenedzer.czyUzytkownikJestZalogowany()){
            adresatMenedzer = new AdresatMenedzer(NAZWA_PLIKU_Z_ADRESATAMI,uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());
    }

}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika(){
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}

int KsiazkaAdresowa::wylogujSie(){
    uzytkownikMenedzer.wylogujSie();
    delete adresatMenedzer;
    adresatMenedzer = NULL;
}

int KsiazkaAdresowa::dodajAdresata(){
    if(uzytkownikMenedzer.czyUzytkownikJestZalogowany()){
        adresatMenedzer->dodajAdresata();
    }
    else{
        cout << "Aby dodac adresata trzeba sie zalogowac" << endl;
        system("pause");
    }

}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow(){
     if(uzytkownikMenedzer.czyUzytkownikJestZalogowany()){
        adresatMenedzer->wyswietlWszystkichAdresatow();
    }
    else {
        cout << "Njpierw trzeba sie zalogowac" << endl;
    }
}

int KsiazkaAdresowa::pobierzIdZalogowanegoUzytkownika(){
    uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika();
}

int KsiazkaAdresowa::usunAdresata(){
    adresatMenedzer->usunAdresata();
}

int KsiazkaAdresowa::podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(int idUsuwanegoAdresata, int idOstatniegoAdresata){
  adresatMenedzer->podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(idUsuwanegoAdresata,idOstatniegoAdresata);
}
void KsiazkaAdresowa::wyszukajPoImieniu(){
    adresatMenedzer->wyszukajAdresatowPoImieniu();
}

void KsiazkaAdresowa::wyszukajPoNazwisku(){
    adresatMenedzer->wyszukajAdresatowPoNazwisku();
}









