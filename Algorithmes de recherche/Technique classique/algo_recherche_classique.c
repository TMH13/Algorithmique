#include "algo_recherche_classique.h"

/***********************************************************************************************************************
    Recherche séquentielle dans un tableau non trié et trié (technique classique) O.C.T = O(n)

    Dans cette technique, on se place au début du tableau. Tant qu’on se trouve encore dans le tableau et que la
    valeur à laquelle on est arrivé dans le tableau est différente de la cible, on poursuit la recherche en passant à
    la valeur suivante.

    Attention, en pseudo-code les indices commencent à 1, en C ils commencent à 0. Les valeurs de i et de la taille du
    tableau données ici sont inférieures de 1 à celles du pseudo-code.

    La description des fonctions se trouve dans le fichier d'en-tête algo_recherche_classique.h
***********************************************************************************************************************/

int algo_recherche_non_triee_classique(const int tab[], int taille_tab, int cible)
{
    int i = 0, position = -1;

    // tant que la valeur n'est pas trouvée et que l'on n'est pas sorti du tableau
    while (i < taille_tab && tab[i] != cible)
        i++; // on passe à l'élément suivant

    if (i < taille_tab) // si on est dans les limites du tableau
        position = i; // on a trouvé la valeur, on récupère sa position

    return position; // retourne la position de l'élément trouvé ou -1
}

int algo_recherche_triee_classique(const int tab[], int taille_tab, int cible)
{
    int i = 0, position = -1;

    // tant que la valeur n'est pas trouvée et que l'on n'est pas sorti du tableau
    while (i < taille_tab && cible > tab[i])
        i++; // on passe à l'élément suivant

    if (i < taille_tab && cible == tab[i]) // si on est dans les limites du tableau et que l'élément est trouvé
        position = i; // on a trouvé la valeur, on récupère sa position

    return position; // retourne la position de l'élément trouvé ou -1
}
