NB: Extraire les fichier .c et .h et méttez les dans le même emplacement que le fichier .cbp

Battleship Game

Description
Le projet **Battleship** est une version console du célèbre jeu de bataille navale, où le joueur tente de localiser et de couler des navires ennemis positionnés sur une grille 10x10. Le jeu propose une expérience interactive avec une interface console, et affiche des informations essentielles telles que le nombre de coups restants et les cibles touchées. Le joueur peut entrer des coordonnées pour tirer, et le système vérifiera si le coup touche ou manque une cible.

Fonctionnalités principales
- **Tirs sur une grille** : Le joueur entre les coordonnées pour attaquer une position spécifique de la grille.
- **Détection des impacts** : Le jeu vérifie si un tir touche un navire ennemi.
- **Affichage des résultats** : Après chaque tir, l'état de la grille est mis à jour, affichant les navires touchés ou manqués.
- **Interface console** : Utilise une interface graphique simplifiée en console pour visualiser les tirs et les navires.
- **Suivi des statistiques** : Comptabilisation des coups restants et du nombre de navires coulés.
- **Sauvegarde des résultats** : À la fin de chaque partie, les résultats sont enregistrés dans un fichier.

Captures d'écran
![image](https://github.com/user-attachments/assets/566e05e5-7d2f-4121-8cc1-b1f6f9c2e96f)
![image](https://github.com/user-attachments/assets/3076fc01-3fc2-4350-bb43-a924271dbf9b)
![image](https://github.com/user-attachments/assets/c8d14127-3db8-448b-82cc-a6c4f43feeb8)
![image](https://github.com/user-attachments/assets/03ae9d78-2a1e-49b6-9495-fa3f22bdf696)

Installation
Pré-requis
Avant de commencer, assurez-vous d'avoir installé les éléments suivants :
- Un **compilateur C** (GCC recommandé)
- **Git** pour cloner le projet
- **Make** pour automatiser la compilation

Instructions
1. Clonez ce dépôt sur votre machine locale :
   ```bash
   git clone https://github.com/VOTRE-UTILISATEUR/Battleship.git
   ```
2. Accédez au dossier du projet :
   ```bash
   cd Battleship
   ```
3. Compilez le projet avec Make :
   ```bash
   make
   ```
4. Exécutez le jeu :
   ```bash
   ./Battleship
   ```

Utilisation
1. Lancez le programme à partir du terminal.
2. Entrez vos coordonnées sous la forme `A1`, `B5`, etc., pour tirer sur une position de la grille.
3. Le jeu indiquera si vous avez touché ou manqué un navire.
4. Continuez jusqu'à ce que tous les navires soient coulés ou que vos coups soient épuisés.

Structure du projet
Le code est structuré de manière modulaire pour faciliter la maintenance et l'extension du jeu. Voici les principaux fichiers et leur rôle :
- `main.c` : Point d'entrée du programme, gère la boucle principale du jeu.
- `fillingmap.c` : Gère la création de la carte avec les bateaux placés aléatoirement.
- `touchsink.c` : Gère la logique de détection des tirs.
- `targetships.c` : Met à jour l'affichage des cibles touchées ou manquées.
- `gotoXY.c`, `color.c`, `clearMessage.c` : Fonctions utilitaires pour l'affichage et la gestion des entrées en console.

Contribution
Les contributions sont les bienvenues ! Si vous souhaitez améliorer ce projet :
1. Forkez le dépôt
2. Créez une branche pour vos modifications :
   ```bash
   git checkout -b ma-branche
   ```
3. Faites vos changements, puis committez-les :
   ```bash
   git commit -m "Ajout d'une nouvelle fonctionnalité"
   ```
4. Poussez votre branche sur GitHub :
   ```bash
   git push origin ma-branche
   ```
5. Ouvrez une pull request sur ce dépôt.
