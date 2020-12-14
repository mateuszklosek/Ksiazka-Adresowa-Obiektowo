#include "KsiazkaAdresowa.h"
#include "UzytkownikMenadzer.h"
#include "MetodyPomocniczne.h"
#include "menu.h"


void KsiazkaAdresowa::rejestracjaUzytkownika() {
    uzytkownikMenadzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow() {
    uzytkownikMenadzer.wypiszWszystkichUzytkownikow();
}

char KsiazkaAdresowa::getChoice() {
    metodyPomocniczne.getChoice();
}

int KsiazkaAdresowa::logowanieUzytkownika() {
    uzytkownikMenadzer.logowanieUzytkownika();
}

char KsiazkaAdresowa::showMenu() {
    menu.showMenu();
}

char KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika() {
    menu.wybierzOpcjeZMenuUzytkownika();
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow() {
    adresatMenadzer.wyswietlWszystkichAdresatow();
}

int KsiazkaAdresowa::dodajAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata) {
    adresatMenadzer.dodajAdresata(idZalogowanegoUzytkownika, idOstatniegoAdresata);
}

 int KsiazkaAdresowa::wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika){
 plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);
 }
