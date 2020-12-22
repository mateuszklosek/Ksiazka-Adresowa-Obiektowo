#include <iostream>
#include "UzytkownikMenadzer.h"
#include "MetodyPomocniczne.h"
#include "menu.h"
#include "AdresatMenadzer.h"
#include "PlikZAdresatami.h"
#include "Adresat.h"

using namespace std;

class KsiazkaAdresowa {
    UzytkownikMenadzer uzytkownikMenadzer;
    AdresatMenadzer *adresatMenadzer;
    MetodyPomocniczne metodyPomocniczne;
    PlikZAdresatami plikZAdresatami;
    Menu menu;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami) : uzytkownikMenadzer(nazwaPlikuZUzytkownikami) {
        adresatMenadzer = NULL;
    };
    ~KsiazkaAdresowa()
    {
        delete adresatMenadzer;
        adresatMenadzer = NULL;
    };
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika();
    char getChoice();
    char showMenu();
    char wybierzOpcjeZMenuUzytkownika();
    void wyswietlWszystkichAdresatow();
    void dodajAdresata();
    int wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    void wylogowanieUzytkownika();
    int pobierzIdZalogowanegoUzytkownika();

};
