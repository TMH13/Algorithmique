#include "algo_recherche_boucle.h"

/***********************************************************************************************************************
    Recherche séquentielle dans un tableau non trié et trié (technique de forçage de boucle) O.C.T = O(n)

    Dans cette technique, on suppose que la recherche va se faire dans tout le vecteur (i < n),
    la boucle s’arrêtera lorsqu’on aura trouvé la cible en donnant à i une valeur plus grande ou égale à n.

    Attention, en pseudo-code les indices commencent à 1, en C ils commencent à 0. Les valeurs de i et de la taille du
    tableau données ici sont inférieures de 1 à celles du pseudo-code.

    La description des fonctions se trouve dans le fichier d'en-tête algo_recherche_boucle.h
***********************************************************************************************************************/

int recherche_non_triee_boucle(const int tab[], int taille_tab, int cible)
{
    int i = 0, position = -1;

    while (i < taille_tab)
    {
        if (tab[i] == cible)
        {
            position = i;
            i = taille_tab;
        }
        else
            i++;
    }

    return position;
}

int recherche_triee_boucle(const int tab[], int taille_tab, int cible)
{
    int i = 0, position = -1;

    while (i < taille_tab && cible > tab[i])
    {
        if (tab[i] == cible)
        {
            position = i;
            i = taille_tab;
        }
        else
            i++;
    }

    return position;
}
