#ifndef MENU_H
#define MENU_H

#include <iostream>
#include "UzytkownikMenadzer.h"
#include "MetodyPomocniczne.h"

using namespace std;

class Menu {

    MetodyPomocniczne metodyPomocniczne;

public:
    char wybor;
    char showMenu();
    char wybierzOpcjeZMenuUzytkownika();
    };


#endif
