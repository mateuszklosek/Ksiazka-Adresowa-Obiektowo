#ifndef ADRESATMENADZER_H
#define ADRESATMENADZER_H

#include <vector>
#include <iostream>
#include <string>


#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "MetodyPomocniczne.h"

using namespace std;

class AdresatMenadzer {

PlikZAdresatami plikZAdresatami;

public:

void wyswietlWszystkichAdresatow();
int dodajAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
};

#endif
