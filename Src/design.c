#include "design.h"
#include "utils.h"
#include "gotoXY.h"
#include <stdio.h>

void Design()
{
    int i, j;

    // Boucles pour mettre les couleurs aux alentours et dans le background de la grille
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 47; j++)
        {
            if(i == 0)
            {
                gotoXY(65 + j, 3);
                putchar(219);
            }
            if(i == 2)
            {
                gotoXY(65 + j, 8);
                putchar(219);
            }
            if(j == 0)
            {
                gotoXY(65, 3 + i);
                putchar(219);
            }
            if(j == 46)
            {
                gotoXY(111, 3 + i);
                putchar(219);
            }
        }
    }

    color(1, 0);
    for(i = 0; i < 11; i++)
    {
        for(j = 0; j < 23; j++)
        {
            if(i == 0)
            {
                gotoXY(2 + j, 1);
                putchar(219);
            }
            if(i == 10)
            {
                gotoXY(2 + j, 12);
                putchar(219);
            }
            if(j == 0)
            {
                gotoXY(2, 1 + i);
                putchar(219);
            }
            if(j == 22)
            {
                gotoXY(24, 2 + i);
                putchar(219);
            }
        }
    }
    color(15, 0); // Réinitialisation des couleurs
}
