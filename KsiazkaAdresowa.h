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
    AdresatMenadzer adresatMenadzer;
    MetodyPomocniczne metodyPomocniczne;
    PlikZAdresatami plikZAdresatami;
    Menu menu;

public:
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami) : uzytkownikMenadzer(nazwaPlikuZUzytkownikami) {
        uzytkownikMenadzer.wczytajUzytkownikowZPliku();
    };
    int logowanieUzytkownika();
    char getChoice();
    char showMenu();
    char wybierzOpcjeZMenuUzytkownika();
    void wyswietlWszystkichAdresatow();
    int dodajAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
    int wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
};
