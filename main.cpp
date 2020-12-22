
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
    //UzytkownikMenadzer uzytkownikMenadzer("Uzytkownicy.txt");

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
            plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(KsiazkaAdresowa.pobierzIdZalogowanegoUzytkownika());
           // system("pause");

           // if (adresaci.empty() == true)
                // Pobieramy idOstatniegoAdresata, po to aby zoptymalizowac program.
                // Dzieki temu, kiedy uztykwonik bedzie dodawal nowego adresata
                // to nie bedziemy musieli jeszcze raz ustalac idOstatniegoAdresata
               // idOstatniegoAdresata = wczytajAdresatowZalogowanegoUzytkownikaZPliku(adresaci, idZalogowanegoUzytkownika);

            wybor = KsiazkaAdresowa.wybierzOpcjeZMenuUzytkownika();

            switch (wybor)
            {
            case '1':
                KsiazkaAdresowa.dodajAdresata();
                break;
            case '2':
                //wyszukajAdresatowPoImieniu(adresaci);
                break;
            case '3':
               // wyszukajAdresatowPoNazwisku(adresaci);
                break;
            case '4':
                KsiazkaAdresowa.wyswietlWszystkichAdresatow();
                //plikZAdresatami.wyswietlWszystkichAdresatow();
                break;
            case '5':
                //idUsunietegoAdresata = usunAdresata(adresaci);
                //idOstatniegoAdresata = podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(idUsunietegoAdresata, idOstatniegoAdresata);
                break;
            case '6':
                //edytujAdresata(adresaci);
                break;
            case '7':
                //zmianaHaslaZalogowanegoUzytkownika(uzytkownicy, idZalogowanegoUzytkownika);
                break;
            case '8':
                KsiazkaAdresowa.wylogowanieUzytkownika();
                //adresaci.clear();
                break;
            }
        }
    }
    return 0;
    }
