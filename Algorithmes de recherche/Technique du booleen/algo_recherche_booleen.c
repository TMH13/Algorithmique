#include "algo_recherche_booleen.h"

/***********************************************************************************************************************
    Recherche séquentielle dans un tableau non trié et trié (technique du booléen) O.C.T = O(n)

    Dans cette technique, on utilise une variable booléenne trouve qui passera de 0 à 1 si la cible est présente
    et a été trouvée dans le tableau.

    Attention, en pseudo-code les indices commencent à 1, en C ils commencent à 0. Les valeurs de i et de la taille du
    tableau données ici sont inférieures de 1 à celles du pseudo-code.

    La description des fonctions se trouve dans le fichier d'en-tête algo_recherche_classique.h
***********************************************************************************************************************/
int algo_recherche_non_triee_booleen(const int tab[], int taille_tab, int cible)
{
    int i = 0, trouve = 0, position = -1;

    // tant que la cible n'est pas trouvée et que l'on n'a pas parcouru tout le tableau
    while (i < taille_tab && trouve == 0)
    {
        if (tab[i] == cible) // si la cible est trouvée
        {
            trouve = 1; // "trouve" reçoit 1
            position = i; // on stocke la position de la cible
        }
        else // sinon
            i++; // on passe à l'élément suivant
    }

    return position; // on retourne la position de la cible
}

int algo_recherche_triee_booleen(const int tab[], int taille_tab, int cible)
{
    int i = 0, trouve = 0, position = -1;

    // tant que la cible n'est pas trouvée et que l'on n'a pas parcouru tout le tableau
    while (i < taille_tab && trouve == 0 && cible > tab[i])
    {
        if (tab[i] == cible) // si la cible est trouvée
        {
            trouve = 1; // "trouve" reçoit 1
            position = i; // on stocke la position de la cible
        }
        else // sinon
            i++; // on passe à l'élément suivant
    }

    return position; // on retourne la position de la cible
}
