# Cube 3D avec Raycasting

Ce projet est une implémentation d'un cube 3D utilisant la technique du raycasting pour simuler une vue en trois dimensions dans une fenêtre 2D.

## Fonctionnalités

- Affichage d'un cube en 3D dans une fenêtre graphique.
- Utilisation du raycasting pour déterminer les distances entre la caméra et les murs du cube.
- Gestion des contrôles de déplacement pour naviguer autour du cube.

## Installation

Fonctionne sur MacOS

1. Clonez ce dépôt sur votre machine :
    ```
    git clone <lien vers le dépôt Git>
    ```
3. Lancer le make :
    ```
    cd Cub3D
    make
    ```
4. lancer le jeu:
   ```
    ./cub3D map/map.cub
   ```

Vous pouvez utiliser les touches WASD pour vous déplacer, les touches fléchées pour tourner la caméra, et la touche ESC pour quitter le jeu.

## Explication du Raycasting

Le raycasting est une technique utilisée pour simuler la projection de rayons lumineux à partir d'un point de vue (la caméra) et détecter les intersections avec des objets tridimensionnels (dans ce cas, les murs du cube). En utilisant le raycasting, nous pouvons calculer la distance entre la caméra et chaque mur du cube, ce qui nous permet de générer une image 2D représentant une vue en perspective du cube.

Dans ce projet, le raycasting est utilisé pour déterminer la distance entre la caméra et les murs du cube en lançant des rayons dans différentes directions depuis la position de la caméra. En mesurant la distance jusqu'à ce qu'un rayon intersecte un mur, nous pouvons déterminer la position relative du mur par rapport à la caméra et afficher le cube en conséquence.

