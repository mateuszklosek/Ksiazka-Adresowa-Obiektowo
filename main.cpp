
#include <iostream>

#include "KsiazkaAdresowa.h"
#include "PlikZAdresatami.h"
#include "menu.h"


using namespace std;

int main() {
    char wybor;
    int idZalogowanegoUzytkownika=0;
    int idOstatniegoAdresata;

    KsiazkaAdresowa KsiazkaAdresowa("Uzytkownicy.txt");
    PlikZAdresatami plikZAdresatami;

    while (true) {
        if (idZalogowanegoUzytkownika == 0) {
            wybor = KsiazkaAdresowa.showMenu();

            switch (wybor) {
            case '1':
                KsiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                idZalogowanegoUzytkownika = KsiazkaAdresowa.logowanieUzytkownika();
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
            idOstatniegoAdresata = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);
            cout << idOstatniegoAdresata<< endl;
            cout << idZalogowanegoUzytkownika<< endl;
            system("pause");

           // if (adresaci.empty() == true)
                // Pobieramy idOstatniegoAdresata, po to aby zoptymalizowac program.
                // Dzieki temu, kiedy uztykwonik bedzie dodawal nowego adresata
                // to nie bedziemy musieli jeszcze raz ustalac idOstatniegoAdresata
               // idOstatniegoAdresata = wczytajAdresatowZalogowanegoUzytkownikaZPliku(adresaci, idZalogowanegoUzytkownika);

            wybor = KsiazkaAdresowa.wybierzOpcjeZMenuUzytkownika();

            switch (wybor)
            {
            case '1':
                idOstatniegoAdresata = plikZAdresatami.dodajAdresata(idZalogowanegoUzytkownika, idOstatniegoAdresata);
                break;
            case '2':
                //wyszukajAdresatowPoImieniu(adresaci);
                break;
            case '3':
               // wyszukajAdresatowPoNazwisku(adresaci);
                break;
            case '4':
                plikZAdresatami.wyswietlWszystkichAdresatow();
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
                idZalogowanegoUzytkownika = 0;
                plikZAdresatami.czyszczenieWektora();
                //adresaci.clear();
                break;
            }
        }
    }
    return 0;
    }
