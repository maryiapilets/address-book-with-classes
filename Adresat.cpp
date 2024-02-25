#include "Adresat.h"

void Adresat::ustawIdUzytkownika(int noweIdUzytkownika){
        idUzytkownika = noweIdUzytkownika;
}

void Adresat::ustawId(int noweId){
     if (noweId >= 0){
        id = noweId;
    }
}

void Adresat::ustawImie(string noweImie){
    imie = noweImie;
}

void Adresat::ustawNazwisko(string noweNazwisko){
    nazwisko = noweNazwisko;
}

void Adresat::ustawEmail(string nowyEmail){
    email = nowyEmail;
}

void Adresat::ustawNumerTelefonu(string nowyNumer){
    numerTelefonu = nowyNumer;
}

void Adresat::ustawAdres(string nowyAdres){
    adres = nowyAdres;
}

string Adresat::pobierzImie(){
    return imie;
}

string Adresat::pobierzNazwisko(){
    return nazwisko;
}

string Adresat::pobierzEmail(){
    return email;
}

string Adresat::pobierzAdres(){
    return adres;
}

string Adresat::pobierzNumerTelefonu(){
    return numerTelefonu;
}

int Adresat::pobierzId(){
    return id;
}

int Adresat::pobierzIdUzytkownika(){
    return idUzytkownika;
}


void Adresat::wyswietlDaneAdresata()
{
    cout << endl << "Id:                 " << pobierzId()<< endl;
    cout << "Imie:               " << pobierzImie()<< endl;
    cout << "Nazwisko:           " << pobierzNazwisko() << endl;
    cout << "Numer telefonu:     " << pobierzNumerTelefonu() << endl;
    cout << "Email:              " << pobierzEmail() << endl;
    cout << "Adres:              " << pobierzAdres() << endl;
}






