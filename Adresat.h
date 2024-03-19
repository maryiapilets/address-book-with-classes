#ifndef ADRESAT_H
#define ADRESAT_H
#include <string>
#include <iostream>



using namespace std;

class Adresat

{
   int id;
   int idUzytkownika;
   string imie;
   string nazwisko;
   string numerTelefonu;
   string email;
   string adres;


   public:
    void wyswietlDaneAdresata();
    void ustawId(int noweId);
    void ustawImie(string noweImie);
    void ustawNazwisko(string noweHaslo);
    void ustawNumerTelefonu(string nowyNumer);
    void ustawEmail(string nowyEmail);
    void ustawAdres(string nowyAdres);

    string pobierzImie();
    string pobierzNazwisko();
    string pobierzNumerTelefonu();
    int pobierzId();
    string pobierzEmail();
    string pobierzAdres();
    int pobierzIdUzytkownika();

    Adresat(int id = 1,  int idUzytkownika = 1, string imie = "Michalina", string nazwisko = "Wojtek", string numerTelefonu = "512112121", string email = "acs@gmail.com", string adres = "Gliwice, ul. Staromiejska 2, m.7"){
        this-> id = id;
        this-> idUzytkownika = idUzytkownika;
        this-> imie = imie;
        this-> nazwisko = nazwisko;
        this-> numerTelefonu = numerTelefonu;
        this -> email = email;
        this-> adres = adres;
    }

   void ustawIdUzytkownika(int noweIdUzytkownika);
};

#endif // ADRESAT_H
