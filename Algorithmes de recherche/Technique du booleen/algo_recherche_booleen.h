#ifndef ALGORITHMIQUE_ALGO_RECHERCHE_BOOLEEN_H
#define ALGORITHMIQUE_ALGO_RECHERCHE_BOOLEEN_H

/***********************************************************************************************************************
    INPUT:
        - tab: pointeur vers le tableau
        - taille_tab: taille du tableau
        - cible: valeur à rechercher
    PROCESS:
        recherche une valeur dans un tableau non trié
    OUTPUT:
        -  1: si la valeur est trouvée
        - -1: si la valeur n'est pas trouvée
 ***********************************************************************************************************************/
int algo_recherche_non_triee_booleen(const int tab[], int taille_tab, int cible);

/***********************************************************************************************************************
    INPUT:
        - tab: pointeur vers le tableau
        - taille_tab: taille du tableau
        - cible: valeur à rechercher
    PROCESS:
        recherche une valeur dans un tableau trié
    OUTPUT:
        -  1: si la valeur est trouvée
        - -1: si la valeur n'est pas trouvée
 ***********************************************************************************************************************/

int algo_recherche_triee_booleen(const int tab[], int taille_tab, int cible);

#endif //ALGORITHMIQUE_ALGO_RECHERCHE_BOOLEEN_H
