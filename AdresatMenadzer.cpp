#include "AdresatMenadzer.h"


void AdresatMenadzer::wyswietlWszystkichAdresatow(){
    plikZAdresatami.wyswietlWszystkichAdresatow();
}

void AdresatMenadzer::dodajAdresata(){

    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata();

    adresaci.push_back(adresat);
    plikZAdresatami.dopiszAdresataDoPliku(adresat);
    cout<< "Nowy adresat zostal dodany!"<<endl;
    system("pause");
}

Adresat AdresatMenadzer::podajDaneNowegoAdresata()
{
    adresat.ustawId(plikZAdresatami.pobierzIdOstatniegoAdresata()+1);
    adresat.ustawIdUzytkownika(ID_ZALOGOWANEGO_UZYTKOWNIKA);

    cout << "Podaj imie: ";
    adresat.ustawImie(metodyPomocniczne.wczytajLinie());
    adresat.ustawImie(metodyPomocniczne.zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.pobierzImie()));

    cout << "Podaj nazwisko: ";
    adresat.ustawNazwisko(metodyPomocniczne.wczytajLinie());
    adresat.ustawNazwisko(metodyPomocniczne.zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.pobierzNazwisko()));

    cout << "Podaj numer telefonu: ";
    adresat.ustawNumerTelefonu(metodyPomocniczne.wczytajLinie());

    cout << "Podaj email: ";
    adresat.ustawEmail(metodyPomocniczne.wczytajLinie());

    cout << "Podaj adres: ";
    adresat.ustawAdres(metodyPomocniczne.wczytajLinie());

    return adresat;
}
