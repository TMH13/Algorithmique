#include "data.h"
#include "Algorithmes de tri\Heapsort\algo_tri_heapsort.h"
#include "Algorithmes de tri\Tris simples\Tri par insertion\algo_tri_insert.h"
#include "Algorithmes de tri\Tris simples\Tri par extraction\algo_tri_extract.h"
#include "Algorithmes de tri\Tris simples\Tri a bulle\algo_tri_bulle.h"

#include "Algorithmes de recherche\Recherche dichotomique\algo_recherche_dicho.h"
#include "Algorithmes de recherche\Technique classique\algo_recherche_classique.h"
#include "Algorithmes de recherche\Technique de forcage de boucle\algo_recherche_boucle.h"
#include "Algorithmes de recherche\Technique du booleen\algo_recherche_booleen.h"
#include "Algorithmes de recherche\Technique de la sentinelle\algo_recherche_sentinelle.h"

#include "Structures de donnees dynamiques\Listes\Liste lineraire unidirectionnelle\llu.h"
#include "Structures de donnees dynamiques\File\file.h"
#include "Structures de donnees dynamiques\Pile\pile.h"

#include "Exemples de recursivite\recursiv.h"
/***********************************************************************************************************************
    Ce programme est un programme de test pour les structures de données dynamiques et les algorithmes de tri et de
    recherche.
***********************************************************************************************************************/

/***********************************************************************************************************************
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
***********************************************************************************************************************/

/***********************************************************************************************************************
    Les algorithmes de tri se trouvent dans les fichiers:
    - "algo_tri_bulle.c" pour l'algorithme de tri à bulle.
    - "algo_tri_insert.c" pour l'algorithme de tri par insertion.
    - "algo_tri_extract.c" pour l'algorithme de tri par extraction.

    Les algorithmes de tri de recherche se trouvent dans les fichiers:
    - "algo_recherche_dicho.c" pour l'algorithme de recherche dichotomique.
    - "algo_recherche_classique.c" pour l'algorithme de recherche séquentielle classique.
    - "algo_recherche_boucle.c" pour la technique de forçage de boucle.
    - "algo_recherche_booleen.c" pour la technique du booléen.
    - "algo_recherche_sentinelle.c" pour la technique de la sentinelle.
***********************************************************************************************************************/

int main()
{
    int n = 10; // valeur pour les tests de la récursivité
    // la taille du tableau est définie dans le fichier "data.h" et elle vaut 50
    int tab_src[TAILLE_TAB], tab_trie[TAILLE_TAB], cible, position;

    srand(time(NULL)); // NOLINT(cert-msc51-cpp)

    // initialisation du tableau avec des valeurs aléatoires
    for (int i = 0; i < TAILLE_TAB; i++)
        tab_src[i] = rand() % 99 + 1; // NOLINT(cert-msc50-cpp)

    //initialisation de la cible de recherche avec une valeur aléatoire
    cible = rand() % 99 + 1; // NOLINT(cert-msc50-cpp)

    // copie du tableau dans un autre tableau
    for (int i = 0; i <= TAILLE_TAB; i++)
        tab_trie[i] = tab_src[i];

    afficher_tab(tab_src, TAILLE_TAB);

    algo_tri_heap_tri_epi(tab_trie, TAILLE_TAB);

    afficher_tab(tab_trie, TAILLE_TAB);

    position = algo_recherche_triee_dicho(tab_trie, TAILLE_TAB, cible);

    affiche_resultat_recherche(position, cible);

    position = algo_recherche_triee_classique(tab_trie, TAILLE_TAB, cible);

    affiche_resultat_recherche(position, cible);

    // Attention aux limitations due au type de variable utilisée, ici int.
    printf("\nLa factorielle de %d vaut : %d\n", n, recursivite_factorielle(n));

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

void affiche_resultat_recherche(int position, int cible)
{
    if (position != -1)
        printf("La valeur %d se trouve a la position %d du tableau.\n", cible, position);
    else
        printf("La valeur %d ne se trouve pas dans le tableau.\n", cible);
}