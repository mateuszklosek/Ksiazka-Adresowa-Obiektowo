#ifndef ADRESATMENADZER_H
#define ADRESATMENADZER_H

#include <vector>
#include <iostream>
#include <string>


#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "MetodyPomocniczne.h"

using namespace std;

class AdresatMenadzer {

    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;
    Adresat adresat;
    MetodyPomocniczne metodyPomocniczne;

public:
    AdresatMenadzer(int idZalogowanegoUzytkownika) : ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika)
    {
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    };
    void wyswietlWszystkichAdresatow();
    void dodajAdresata();
    Adresat podajDaneNowegoAdresata();
};

#endif
