#include "algo_recherche_sentinelle.h"

/***********************************************************************************************************************
    Recherche séquentielle dans un tableau non trié (technique de la sentinelle) O.C.T = O(n)

    Cette technique consiste à placer la valeur de la cible après la dernière donnée de l’ensemble dans lequel
    s’effectue la recherche.

    Dans un tableau contenant n-1 informations, on place la valeur de la cible dans la case n.

    Il est évident que dans ce cas, toute recherche va aboutir. On pourra conclure sur la présence de la cible dans
    le vecteur si on a trouvé la cible avant la case n.

    !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    Cette technique est bien sûr la plus efficace. Malheureusement, elle suppose que l’on dispose d’une case
    supplémentaire, ce qui n’est pas toujours certain.

    Attention, en pseudo-code les indices commencent à 1, en C ils commencent à 0. Les valeurs de i et de la taille du
    tableau données ici sont inférieures de 1 à celles du pseudo-code.

    La description des fonctions se trouve dans le fichier d'en-tête algo_recherche_classique.h
***********************************************************************************************************************/

int algo_recherche_non_triee_sentinelle(int tab[], int taille_tab, int cible)
{
    int i = 0, position = -1;

    tab[taille_tab] = cible; // on place la cible dans la dernière case du tableau

    while (tab[i] != cible) // tant que la cible n'est pas trouvée
        i++;

    if (i < taille_tab) // si la cible est trouvée avant la dernière case du tableau
        position = i; // on stocke la position de la cible

    return position; // on retourne la position de la cible (-1 si elle n'est pas trouvée avant la dernière case)
}
