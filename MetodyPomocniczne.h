#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H

#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <fstream>
#include <sstream>

using namespace std;

class MetodyPomocniczne {
public:
    static string konwersjaIntNaString(int liczba);
    char getChoice();
    string wczytajLinie();
    string pobierzLiczbe(string tekst, int pozycjaZnaku);
    int konwersjaStringNaInt(string liczba);
    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    bool czyPlikJestPusty(fstream &plikTekstowy);
    int wczytajLiczbeCalkowita();
    char wczytajZnak();
    int podajIdWybranegoAdresata();
};



#endif
