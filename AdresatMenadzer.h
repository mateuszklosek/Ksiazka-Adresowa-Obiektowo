#ifndef ADRESATMENADZER_H
#define ADRESATMENADZER_H

#include <vector>
#include <iostream>
#include <string>


#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "MetodyPomocniczne.h"
#include "Menu.h"

using namespace std;

class AdresatMenadzer {

    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;
    Adresat adresat;
    Menu menu;
    MetodyPomocniczne metodyPomocniczne;

public:
    AdresatMenadzer(int idZalogowanegoUzytkownika) : ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika)
    {
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    };
    void wyswietlWszystkichAdresatow();
    void dodajAdresata();
    Adresat podajDaneNowegoAdresata();
    void wyswietlDaneAdresata(int i);
    void wyszukajAdresatowPoNazwisku();
    void wyszukajAdresatowPoImieniu();
    int usunAdresata();
    void edytujAdresata();
    void zaktualizujDaneWybranegoAdresata(Adresat adresat, int idEdytowanegoAdresata);
    int podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(int idUsuwanegoAdresata, int idOstatniegoAdresata);

};

#endif
