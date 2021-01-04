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

void KsiazkaAdresowa::logowanieUzytkownika() {
    uzytkownikMenadzer.logowanieUzytkownika();
    if (uzytkownikMenadzer.czyUzytkownikJestZalogowany()) {
        adresatMenadzer = new AdresatMenadzer(uzytkownikMenadzer.pobierzIdZalogowanegoUzytkownika());
    }
}

char KsiazkaAdresowa::showMenu() {
    menu.showMenu();
}

char KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika() {
    menu.wybierzOpcjeZMenuUzytkownika();
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow() {
    adresatMenadzer -> wyswietlWszystkichAdresatow();
}

void KsiazkaAdresowa::dodajAdresata() {
    adresatMenadzer -> dodajAdresata();
}

int KsiazkaAdresowa::wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika) {
    plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);
}

void KsiazkaAdresowa::wylogowanieUzytkownika() {
    uzytkownikMenadzer.wylogowanieUzytkownika();
    delete adresatMenadzer;
    adresatMenadzer = NULL;
}

int KsiazkaAdresowa::pobierzIdZalogowanegoUzytkownika() {
    uzytkownikMenadzer.pobierzIdZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wyszukajAdresatowPoNazwisku() {
    adresatMenadzer -> wyszukajAdresatowPoNazwisku();
}

void KsiazkaAdresowa::wyszukajAdresatowPoImieniu() {
    adresatMenadzer -> wyszukajAdresatowPoImieniu();
}

int KsiazkaAdresowa::usunAdresata() {
    adresatMenadzer -> usunAdresata();
}

void KsiazkaAdresowa::edytujAdresata() {
    adresatMenadzer -> edytujAdresata();
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika() {
    uzytkownikMenadzer.zmianaHaslaZalogowanegoUzytkownika();
}
