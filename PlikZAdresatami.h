#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <cstdlib>

#include "Adresat.h"
#include "MetodyPomocniczne.h"

using namespace std;

class PlikZAdresatami {

    MetodyPomocniczne metodyPomocniczne;
    fstream plikTekstowy;
    string nazwaPlikuZAdresatami = "Adresaci.txt";
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);

public:

    vector <Adresat> adresaci;
    Adresat adresat;
    PlikZAdresatami() {
        wczytajAdresatowZalogowanegoUzytkownikaZPliku(0);
    };
    int wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    void wyswietlWszystkichAdresatow();
    void wyswietlDaneAdresata(int i);
    void czyszczenieWektora();
    int dodajAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
    void dopiszAdresataDoPliku();
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami();

};


#endif
