#ifndef ALGORITHMIQUE_DATA_H
#define ALGORITHMIQUE_DATA_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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

#endif //ALGORITHMIQUE_DATA_H
