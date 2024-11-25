#include <stdio.h>
#include "dossierjeu.h"

void DossierJeu(int cibles, int vict, char Nom[20])
{
    FILE* fichier; // Initialisation de la variable fichier de type FILE

    // Ouverture du fichier en mode ajout (append) pour ne pas écraser les données existantes
    fichier = fopen("Battleships.txt", "a");

    // Vérification si l'ouverture du fichier a échoué
    if(fichier == NULL)
    {
        printf("Erreur lors de l'ouverture du fichier !\n");
        return; // Sortie de la fonction en cas d'erreur
    }

    // Écriture des données dans le fichier
    fprintf(fichier, "Nom du joueur : %s\n", Nom);
    fprintf(fichier, "Nombre de cibles touchées : %d\n", cibles);
    fprintf(fichier, "Statut : %s\n", vict == 1 ? "Gagné" : "Perdu");
    fputs("----------------------------\n", fichier);  // Séparateur pour les différentes parties du jeu

    // Fermeture du fichier
    fclose(fichier);

    // Confirmation de l'enregistrement des données
    printf("Les resultats ont ete enregistres dans le fichier.\n");
}
