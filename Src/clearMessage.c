#include "clearMessage.h"
#include "gotoXY.h"
#include <stdio.h>

void clearMessage() {
    gotoXY(1, 16); // Aller à la position où le message est affiché
    printf("                                                                                               "); // Effacer le message en remplaçant par des espaces
    gotoXY(1, 15); // Replacer le curseur pour la prochaine entrée de coordonnées
}
