#ifndef ALGORITHMIQUE_ALGO_RECHERCHE_DICHO_H
#define ALGORITHMIQUE_ALGO_RECHERCHE_DICHO_H

/***********************************************************************************************************************
    INPUT:
        - tab: tableau d'entiers
        - taille: taille du tableau
        - element: élément à rechercher
    PROCESS:
        recherche un élément dans un tableau trié
    OUTPUT:
        - indice de l'élément recherché si l'élément est trouvé
        - -1 si l'élément n'est pas trouvé
***********************************************************************************************************************/

int recherche_triee_dicho(const int tab[], int taille, int cible);

#endif //ALGORITHMIQUE_ALGO_RECHERCHE_DICHO_H
