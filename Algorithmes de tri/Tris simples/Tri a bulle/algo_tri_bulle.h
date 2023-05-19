#ifndef ALGORITHMIQUE_ALGO_TRI_BULLE_H
#define ALGORITHMIQUE_ALGO_TRI_BULLE_H

/***********************************************************************************************************************
    Tri à bulle O.C.T = O(n²)

    L’idée est de comparer 2 éléments successifs du vecteur, si ceux-ci ne sont pas dans l’ordre souhaité
    (croissant par exemple), on les permute.

    Si on fait cette opération depuis les 2 premiers jusqu’aux 2 derniers, on aura « poussé » le plus grand en
    dernière position.

    Si le vecteur contenait n éléments au départ, il suffira de recommencer l’opération pour le vecteur des n-1
    premiers éléments pour obtenir de nouveau le plus grand élément en dernière position.

    Pas à pas, les derniers éléments seront triés en ordre croissant.

    On recommencera l’opération tant qu’il restera encore 2 éléments.
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
void algo_tri_bulle(int tab[], int taille_tab);

/***********************************************************************************************************************
    INPUT:
        - tab: pointeur vers le tableau
        - taille_tab: taille du tableau
    PROCESS:
        trie le tableau
    OUTPUT:
        aucun
 ***********************************************************************************************************************/
void algo_tri_bulle_ameliore(int tab[], int taille_tab);

#endif //ALGORITHMIQUE_ALGO_TRI_BULLE_H
