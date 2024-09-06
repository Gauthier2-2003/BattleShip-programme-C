#include "targetships.h"
#include "game_data.h"
#include <stdio.h>


void targetships(int x, int y)
{
    int a, b; // Déclaration de variables locales

    a = x;

    // Test si les coordonnées (a, y) touchent un bateau ou pas
    if(map[a][y] == 1)
    {
        b = 2 * y + 3;
        gotoXY(b + 1, a + 2);
        color(0, 0); // Appel de fonction color pour modifier la couleur du pixel
        printf("%c", 219); // Affichage d'un rectangle si la cible est touchée
    }
    else
    {
        b = 2 * y + 3;
        gotoXY(b + 1, a + 2);
        color(4, 0);
        printf("%c", 219); // Affichage d'un rectangle si la cible n'a pas été atteinte
    }
    color(15, 0); // Réinitialisation des couleurs
}
