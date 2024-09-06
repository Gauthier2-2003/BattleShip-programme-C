#include <windows.h>
#include "utils.h"

void color(int couleurDesCibles, int CouleurDeFond)
{
    HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H, CouleurDeFond * 16 + couleurDesCibles);
}
