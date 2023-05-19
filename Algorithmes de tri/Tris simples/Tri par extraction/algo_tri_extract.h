#ifndef ALGORITHMIQUE_ALGO_TRI_EXTRACT_H
#define ALGORITHMIQUE_ALGO_TRI_EXTRACT_H

/***********************************************************************************************************************
    Tri par extraction O.C.T = O(n²)

    L’idée est d’extraire des éléments du vecteur, soit le plus grand, soit le plus petit, et de l’installer en
    bonne position, c’est-à-dire à la fin du vecteur pour le plus grand.

    Lorsqu’on a fait l’opération pour le vecteur entier de n éléments, on recommence pour le vecteur des n-1 premiers
    et ainsi de suite.
***********************************************************************************************************************/


/***********************************************************************************************************************
    INPUT:
        - tab: pointeur vers le tableau
        - taille_tab: taille du tableau
    PROCESS:
        trie le tableau
    OUTPUT:
        aucun
 ***********************************************************************************************************************/
void algo_tri_extract(int tab[], int taille_tab);

#endif //ALGORITHMIQUE_ALGO_TRI_EXTRACT_H
