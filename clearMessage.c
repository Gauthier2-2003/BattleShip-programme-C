#include "clearMessage.h"
#include "gotoXY.h"
#include <stdio.h>

void clearMessage() {
    gotoXY(1, 16); // Aller � la position o� le message est affich�
    printf("                                                                                               "); // Effacer le message en rempla�ant par des espaces
    gotoXY(1, 15); // Replacer le curseur pour la prochaine entr�e de coordonn�es
}
