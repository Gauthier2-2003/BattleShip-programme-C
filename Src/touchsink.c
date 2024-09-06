#include "touchsink.h"
#include "game_data.h"  // Pour accéder à map
#include <stdio.h>

int touchsink(int x, int y, int boulets, int cibles)
{
    int a = 0;

    a = x;

    if(map[a][y] == 1) // Si on touche un bateau à cette position
    {
        boulets -= 1;
        cibles += 1;
    }
    else
    {
        boulets -= 1;
    }

    // Affichage du nombre de boulets restants et de cibles touchées
    if(boulets >= 10)
    {
        gotoXY(70, 5);
        printf("Nombre de boulets restant :  %d", boulets);
        gotoXY(70, 6);
        printf("Nombre de cibles touchees :  %d", cibles);
    }
    else
    {
        gotoXY(71, 5);
        printf("\bNombre de boulets restant :    %d", boulets);
        gotoXY(71, 6);
        printf("\bNombre de cibles touche :    %d", cibles);
    }

    return cibles;
}
