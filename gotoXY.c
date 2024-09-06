#include <windows.h>
#include "gotoXY.h"


void gotoXY(int x, int y)
{
    COORD c; // Déclaration de la variable de type COORD (nom d'une structure système)
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c); // Appel de la fonction système permettant le positionnement du curseur dans la console
}

