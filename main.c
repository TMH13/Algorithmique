#include "data.h"
/*
    La structure de données utilisée se trouve dans le fichier "data.h".
    Il s'agit de la structure suivante :

    typedef struct Node
    {
         char nom[20];
        int age;
        struct node *next;
    } Node;

    C'est une simple structure représentant un élément d'une pile, file ou liste linéaire.

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

    Ici dans le fichier "main.c", peuvent être testés les différentes fonctions de manipulation des structures de données.
 */

int main()
{
    int tab[TAILLE_TAB];

    srand(time(NULL));

    for (int i = 0; i < TAILLE_TAB; i++)
        tab[i] = rand() % 99 + 1;

    afficher_tab(tab, TAILLE_TAB);

    algo_tri_heap_tri_epi(tab, TAILLE_TAB);

    afficher_tab(tab, TAILLE_TAB);

    return 0;
}

void afficher_node(Node *node)
{
    printf("Nom: %s\n", node->nom);
    printf("Age: %d\n\n", node->age);
}

void afficher_tab(int *tab, int taille)
{
    printf("Tableau: ");
    for (int i = 0; i < taille; i++)
        printf("[%2d]", tab[i]);
    printf("\nIndice:  ");
    for (int i = 0; i < taille; i++)
        printf("[%2d]", i);
    printf("\n\n");
}

