#include <windows.h>
#include "gotoXY.h"


void gotoXY(int x, int y)
{
    COORD c; // D�claration de la variable de type COORD (nom d'une structure syst�me)
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c); // Appel de la fonction syst�me permettant le positionnement du curseur dans la console
}

