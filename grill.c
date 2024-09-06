#include "grill.h"
#include "utils.h"
#include <stdio.h>

void grill()
{
    int i, j;

    printf("%c%c%c%c", 32, 32, 32, 32);

    for(i = 0; i < 10; i++)
    {
        printf("%d", i + 1);
        putchar(' '); // Espacement entre les colonnes
    }
    printf("\n\n");

    for(i = 0; i < 10; i++)
    {
        putchar(i + 65); // Lettres pour les lignes
        putchar(32);
        putchar(32);
        for(j = 0; j < 11; j++)
        {
            if(j + 1 < 11)
            {
                color(15, 6); // Couleur des cases de la grille
                putchar('|');
                putchar('_');
            }
            else
            {
                putchar('|');
            }
        }
        color(15, 0); // Réinitialisation des couleurs
        printf("\n");
    }
}
