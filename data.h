#ifndef ALGORITHMIQUE_DATA_H
#define ALGORITHMIQUE_DATA_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>



#define TAILLE_TAB 50 // taille du tableau d'entiers

/*
    Ceci est une simple structure représentant un élément d'une pile, file ou liste linéaire.

    Elle pourrait représenter une personne avec son nom et son âge à insérer dans une pile, file ou liste linéaire.

    Elle possède trois champs :
        - un champ "nom" de type "char" qui contient le nom de l'élément.
        - un champ "age" de type "int" qui contient l'âge de l'élément.
        - un champ "next" de type "struct node *" qui contient l'adresse de l'élément suivant.

    Les fonctions de manipulation de la structure de données se trouvent dans les fichiers respectifs :
        - "llu.c" pour la liste linéaire unidirectionnelle.
        - "llb.c" pour la liste linéaire bidirectionnelle.
        - "llc.c" pour la liste linéaire circulaire.
        - "pile.c" pour la pile.
        - "file.c" pour la file.

    S'y trouvent également les explicatifs de ces structures de données dynamiques.

    Les types de données ont été choisies afin de pouvoir faire des tests sur des chaînes de caractères et des entiers.
*/

typedef struct Node
{
    char nom[20];
    int age;
    struct Node *next;
} Node;


/**********************************************************************************************************************
    INPUT:
        - node: élément à afficher
    PROCESS:
        affiche un élément de la structure de données
    OUTPUT:
        aucun
***********************************************************************************************************************/
void afficher_node(Node *node);

/**********************************************************************************************************************
    INPUT:
        - tab: tableau à afficher
        - taille: taille du tableau
    PROCESS:
        affiche un tableau d'entiers
    OUTPUT:
        aucun
***********************************************************************************************************************/
void afficher_tab(int tab[], int taille);


/**********************************************************************************************************************
    INPUT:
        - position: position de l'élément recherché dans le tableau initialisée à -1
        - cible: élément recherché
    PROCESS:
        affiche le résultat d'une recherche dans un tableau d'entiers
    OUTPUT:
        aucun
***********************************************************************************************************************/
void affiche_resultat_recherche(int position, int cible);
#endif //ALGORITHMIQUE_DATA_H
