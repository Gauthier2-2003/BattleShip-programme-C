/*Projet 3A, jeu Bataille navale
Ecole Nationale Supérieur des Ingénieurs du Mans (ENSIM)
codé par DJOUMA Aubin Gauthier*/




#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include "fillingmap.h"
#include "design.h"
#include "touchsink.h"
#include "targetships.h"
#include "gotoXY.h"
#include "grill.h"
#include "dossierjeu.h"
#include "clearMessage.h"
#include "utils.h"
#include "game_data.h"
#include "console_utils.h"

int main()
{
    // Déclaration des variables
    int y = 0;
    char x;
    int nb_boulets = 25, nb_cibles = 0; // Initialisation du nombre de boulets et de cibles
    int k, i, j, one = 0, vict;
    char Nom[20];
    /*char test_line = 'K';
    int test_col = 0;*/
    int ligne = 0;
    int colonne = 0;

    // Remplissage initial de la carte avec les positions des bateaux
    fillingmap();

    // Compter le nombre de cases avec des bateaux
    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
        {
            if(map[i][j] == 1)
            {
                one += 1;
            }
        }
    }

    // Saisie du nom du joueur
    printf("Entrer votre nom : ");
    gets(Nom);
    system("cls"); // Nettoyage de l'écran
    gotoXY(35, 1);
    color(1, 0); // Couleur du texte en bleu et fond en noir
    printf("BATAILLE NAVALE");

    gotoXY(0, 0);
    color(15, 0); // Couleur du texte en blanc et fond en noir
    grill(); // Dessiner la grille du jeu
    Design(); // Ajouter des couleurs et designs
    //fillingmap(); // Positionner les bateaux

    gotoXY(70, 5);
    printf("Nombre de boulets : 25");

    // Boucle principale du jeu
    do
    {
        do
        {
            gotoXY(1, 15);
            printf("Votre tir chef [A-J][0-9] (sous la forme A2)? ");
            printf("\b\b\b\b");
            printf("\t");
            scanf("%c%d", &x, &y);

            // Transformation de x en indice de ligne
            ligne = x - 'A';
            colonne = y - 1;
            fflush(stdin);

            /*/ Vérification si les coordonnées sont valides
            if (ligne < 0 || ligne >= 10 || colonne < 0 || colonne >= 10) {
                printf("Coordonnées invalides, essayez à nouveau.\n");
                clearMessage();
                continue;
            }
            if (coups_deja_joues[ligne][colonne] == 1) {
                printf("Vous avez déjà tiré sur cette case. Rejouez.\n");
                getchar();
                clearMessage();
                continue;
            }*/

        } while(ligne > 10 && ligne < 0 && colonne > 10 && colonne < 0 );//while(test_line == x && test_col == y);

        /*test_line = x;
        test_col = y;*/

        k = x; // Transformation de x en entier pour effectuer le test
        k = k - 65; // Conversion du caractère en indice

        // Vérification des coordonnées
        if(ligne < 10 && ligne >= 0 && colonne < 10 && colonne >= 0 && coups_deja_joues[ligne][colonne] != 1)
        {
            nb_cibles = touchsink(ligne, colonne, nb_boulets, nb_cibles); // Vérification si le tir touche un bateau
            targetships(ligne, colonne); // Marquer le tir sur la carte

            nb_boulets -= 1; // Décrémentation du nombre de boulets restants
        }

        // Mark this position as played
        coups_deja_joues[ligne][colonne] = 1;

    } while(nb_boulets != 0); // Continuer jusqu'à épuisement des boulets

    gotoXY(70, 10);

    // Affichage du résultat du jeu
    if(nb_cibles >= one)
    {
        vict = 1;
        printf("***************You Win***************");
        gotoXY(70, 11);
        printf("***************CONGRATULATION***************");
    }
    else
    {
        vict = 0;
        printf("***************You Lose***************");
        gotoXY(70, 12);
        printf("VOICI LES POSITIONS DES BATEAUX :");
        gotoXY(70, 14);
        for(i = 0; i < 10; i++)
        {
            for(j = 0; j < 10; j++)
            {
                printf("%d ", map[i][j]);
            }
            printf("\n");
            gotoXY(70, 14 + i + 1);
        }
    }
    gotoXY(1, 20);
    DossierJeu(nb_cibles, vict, Nom); // Enregistrement des résultats dans un fichier

    return 0;
}
