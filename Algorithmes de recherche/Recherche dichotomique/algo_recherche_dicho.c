#include "algo_recherche_dicho.h"

/***********************************************************************************************************************

    Recherche dichotomique dans un tableau trié O.C.T = O(log n) (les logarithmes sont en base 2)

    Domaine d’application :
        Cette méthode s’applique à un ensemble de données triées, vecteur ou tableau de dimension 1, liste linéaire
        unidirectionnelle ou bidirectionnelle, fichier, …

    Principe :
        On compare « l’objet » recherché : nombre, chaîne de caractères, caractère ou autre que l’on appellera
        « cible », avec « l’objet » situé au milieu de l’ensemble trié (par exemple un tableau de dimension 1) qu’on
        appellera clé médiane. Cette comparaison indique immédiatement le demi-tableau dans lequel il faudra poursuivre
        la recherche.
        On applique alors le même principe à ce demi-tableau qui devient le nouveau tableau de recherche.

    !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    La recherche doit se poursuivre tant que le tableau de recherche comprend plus d’un élément, ce qui a été
    traduit par inf < sup

    On aurait tendance à penser que la poursuite de la recherche s’avère inutile dans le cas où la cible est égale
    à t[m] ce qui semble tout à fait logique !

    Et pourtant, malgré ce qu’on peut penser, cette idée n’est pas intéressante. En effet, il faudrait pour cela
    ajouter à l’algorithme un test à chaque itération. Or, dans les premiers tours de boucle, la chance est très faible
    de tomber sur la valeur cible.

    On a une très grande probabilité de ne trouver la cible que dans les 3 dernières itérations.
    Le gain de ces 3 itérations est faibles par rapport au gain d’une opération supplémentaire par itération !

    C’est pourquoi, dans le cas de la recherche dichotomique, on ne prévoit pas d’arrêt de boucle lorsqu’on tombe
    sur la cible.

    Il n'y a pas de problème concernant les synonymes :

        - La cible (valeur recherchée) est absente :
            Le fait qu’il y ait des synonymes ne pose aucun problème puisqu'on compare chaque fois à une seule clé,
            la recherche se fera jusqu’au bout et la réponse sera négative.

        - La cible est présente une seule fois :
            Les autres synonymes n’auront aucun effet comme dans le cas précédent

        - La cible est présente plusieurs fois :
            La condition cible <= t[i] présente dans l’algorithme va faire que, si la cible est égale à la clé médiane,
            c’est la variable sup qui va varier et diminuer à chaque itération, ce qui va donner, si on poursuit la
            recherche, même lorsqu’on a trouvé la cible, un arrêt sur le plus petit des indices des cases dans
            lesquelles la cible est présente, soit le numéro de la case correspondant à la première occurrence
            de celle-ci.
***********************************************************************************************************************/

int recherche_triee_dicho(const int tab[], int taille, int cible)
{
    int inf = 0, sup = taille - 1, m, position = -1;

    // tant que l'intervalle de recherche n'est pas vide
    while (inf < sup)
    {
        m = (inf + sup) / 2; // m reçoit la valeur du milieu de l'intervalle de recherche

        if (cible <= tab[m])  // si la cible est inférieure ou égale à l'élément du milieu
            sup = m; // on réduit l'intervalle de recherche à la partie inférieure
        else
            inf = m + 1; // sinon, on réduit l'intervalle de recherche à la partie supérieure
    }

    if (tab[inf] == cible) // si la cible est égale à l'élément du milieu
        position = inf; // on retourne la position de l'élément recherché

    return position; // on retourne la position de l'élément recherché ou -1 si l'élément n'est pas trouvé
}
