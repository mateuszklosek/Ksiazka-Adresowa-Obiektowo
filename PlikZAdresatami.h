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
    fstream tymczasowyPlikTekstowy;
    string nazwaPlikuZAdresatami = "Adresaci.txt";
    string nazwaTymczasowegoPlikuZAdresatami = "PlikTymczasowy.txt";
    int idOstatniegoAdresata;

public:

    vector <Adresat> adresaci;
    PlikZAdresatami() {
        idOstatniegoAdresata = 0;
    };
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    void dopiszAdresataDoPliku(Adresat adresat);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    int pobierzIdOstatniegoAdresata();
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    void usunWybranegoAdresata(int idUsuwanegoAdresata);
    void usunPlik(string nazwaPlikuZRozszerzeniem);
    void zmienNazwePliku(string staraNazwa, string nowaNazwa);
    int IdOstatniegoAdresataPoUsunieciuWybranegoAdresata(int idUsuwanegoAdresata);
    int pobierzZPlikuIdOstatniegoAdresata();
    void ustawIdOstatniegoUzytkownika(int noweIdOstatniegoUzytkownika);
    int zwrocNumerLiniiSzukanegoAdresata(int idAdresata);
    void edytujWybranaLinieWPliku(int numerEdytowanejLinii, string liniaZDanymiAdresataOddzielonePionowymiKreskami);



};


#endif
