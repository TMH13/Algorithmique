#ifndef ALGORITHMIQUE_ALGO_TRI_INSERT_H
#define ALGORITHMIQUE_ALGO_TRI_INSERT_H

/***********************************************************************************************************************
    Tri par insertion O.C.T = O(n²)

    On partage le vecteur en 2 parties, la partie triée et la partie non triée. On prend le premier élément de la
    partie non triée que l’on met dans une variable réserve.

    On déplace d’une case vers la droite tous les éléments plus grands que lui dans la partie triée,
    puis on l’installe en bonne place.

    On peut améliorer l’algorithme en plaçant dans la case précédant le début du vecteur (case 0 par exemple),
    une valeur plus petite que n’importe quelle valeur qui pourrait intervenir dans celui-ci et que l’on appelle
    sentinelle.

    Il faut cependant être certain de pouvoir disposer de cet emplacement

    le tri par insertion est le meilleur des tris simples bien que son O.C.T. soit aussi de O(n²).

    Par ailleurs, ce tri possède un autre avantage, il est stable, ce qui signifie que si le vecteur a été trié selon
    une première clé, les synonymes sur la nouvelle clé resteront triés sur la clé précédente.
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
void algo_tri_insert(int tab[], int taille_tab);

/***********************************************************************************************************************
    INPUT:
        - tab: pointeur vers le tableau
        - taille_tab: taille du tableau
    PROCESS:
        trie le tableau
    OUTPUT:
        aucun
 ***********************************************************************************************************************/
void algo_tri_insert_ameliore(int tab[], int taille_tab);

#endif //ALGORITHMIQUE_ALGO_TRI_INSERT_H
