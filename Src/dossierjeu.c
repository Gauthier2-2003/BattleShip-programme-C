#include <stdio.h>
#include "dossierjeu.h"

void DossierJeu(int cibles, int vict, char Nom[20])
{
    FILE* fichier; // Initialisation de la variable fichier de type FILE

    // Ouverture du fichier en mode ajout (append) pour ne pas �craser les donn�es existantes
    fichier = fopen("Battleships.txt", "a");

    // V�rification si l'ouverture du fichier a �chou�
    if(fichier == NULL)
    {
        printf("Erreur lors de l'ouverture du fichier !\n");
        return; // Sortie de la fonction en cas d'erreur
    }

    // �criture des donn�es dans le fichier
    fprintf(fichier, "Nom du joueur : %s\n", Nom);
    fprintf(fichier, "Nombre de cibles touch�es : %d\n", cibles);
    fprintf(fichier, "Statut : %s\n", vict == 1 ? "Gagn�" : "Perdu");
    fputs("----------------------------\n", fichier);  // S�parateur pour les diff�rentes parties du jeu

    // Fermeture du fichier
    fclose(fichier);

    // Confirmation de l'enregistrement des donn�es
    printf("Les r�sultats ont �t� enregistr�s dans le fichier.\n");
}
