#ifndef MENU_H
#define MENU_H
#include <iostream>
#include "MetodyPomocnicze.h"


using namespace std;

class Menu{
    MetodyPomocnicze metodyPomocnicze;

public:
    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();
    char wybierzOpcjeZMenuEdycja();
};



#endif // MENU_H
