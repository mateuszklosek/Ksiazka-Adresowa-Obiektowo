
#include <iostream>

#include "KsiazkaAdresowa.h"
#include "PlikZAdresatami.h"
#include "menu.h"
#include "UzytkownikMenadzer.h"

using namespace std;

int main() {
    char wybor;
    int idZalogowanegoUzytkownika=0;
    int idOstatniegoAdresata;

    KsiazkaAdresowa KsiazkaAdresowa("Uzytkownicy.txt");
    PlikZAdresatami plikZAdresatami;

    while (true) {
        if (KsiazkaAdresowa.pobierzIdZalogowanegoUzytkownika() == 0) {
            wybor = KsiazkaAdresowa.showMenu();

            switch (wybor) {
            case '1':
                KsiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                KsiazkaAdresowa.logowanieUzytkownika();
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        } else {
            KsiazkaAdresowa.wczytajAdresatowZalogowanegoUzytkownikaZPliku(KsiazkaAdresowa.pobierzIdZalogowanegoUzytkownika());

            wybor = KsiazkaAdresowa.wybierzOpcjeZMenuUzytkownika();

            switch (wybor) {
            case '1':
                KsiazkaAdresowa.dodajAdresata();
                break;
            case '2':
                KsiazkaAdresowa.wyszukajAdresatowPoImieniu();
                break;
            case '3':
                KsiazkaAdresowa.wyszukajAdresatowPoNazwisku();
                break;
            case '4':
                KsiazkaAdresowa.wyswietlWszystkichAdresatow();

                break;
            case '5':
                KsiazkaAdresowa.usunAdresata();
                //idUsunietegoAdresata = usunAdresata(adresaci);
                //idOstatniegoAdresata = podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(idUsunietegoAdresata, idOstatniegoAdresata);
                break;
            case '6':
                KsiazkaAdresowa.edytujAdresata();
                break;
            case '7':
                KsiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
                break;
            case '8':
                KsiazkaAdresowa.wylogowanieUzytkownika();
                break;
            }
        }
    }
    return 0;
}
