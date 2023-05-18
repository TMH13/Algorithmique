#ifndef ALGORITHMIQUE_ALGO_TRI_HEAPSORT_H
#define ALGORITHMIQUE_ALGO_TRI_HEAPSORT_H

/***********************************************************************************************************************
    HeapSort:

    O.C.T: O(n log n)


    Le heap-sort ou tri en épi ou tri-arbre est une méthode de tri évolué, performant dans le cas d’un grand nombre
    de données à trier.

    La méthode de ce tri consiste à avancer en première position (de manière très originale et particulière)
    le plus grand élément d’un tableau de n éléments, à le mettre à sa place en dernière position dans le tableau
    en l’échangeant avec l’élément situé à cet endroit puis à refaire l’opération pour le tableau de n-1 éléments

    Il suffit d’ignorer la dernière case et de reproduire ensuite le même procédé.


    O.C.T: première partie: O(n) ~n
    O.C.T: deuxième partie: O(log n) logarithme est en base 2

    La fonction TRI_EPI :
        a. constitution du heap.
            pour i allant de n/2 jusque 1 par pas de –1 faire PATERNER( t , i , n )

            Après cette étape, l'arbre sera dans un état tel que tout élément de l'arbre est plus grand que ses deux fils
            (pour autant qu'il en ait)

        b. tri par extraction du plus grand élément du tableau de i éléments suivi de la reconstitution du heap dans
        le tabeau de i-1 éléments, ceci pour i allant de n à 2 soit :
            - échange du plus grand élément se trouvant en première position avec celui qui se trouve en fin de tableau
            echanger ( t[1] , t[i] )
            - reconstitution du heap en insérant le nombre qui se trouve en première position en bonne place dans le
            tableau duquel on a supprimé le dernier élément.
            Paterner( t , 1 , i )

    La fonction PATERNER:
        L’opération qui consiste à examiner si un élément du tableau peut être le père de ses deux fils, à l’échanger,
        si ce n’est pas le cas, avec le plus grand de ses 2 fils, et à vérifier si celui-ci peut être le père de ses
        fils et ainsi de suite sera appelée PATERNER.

        Le travail est de paterner successivement chaque élément du tableau à partir de la case n/2 en reculant jusqu’à
        la première.

        Ce qui peut s’écrire :
            Pour i allant de n/2 à 1par pas de –1 paterner(t,i,n)

***********************************************************************************************************************/

/***********************************************************************************************************************
    INPUT:
        - tab: tableau d'entiers
        - inf: indice de début du tableau
        - sup: indice de fin du tableau
    PROCESS:
        crée un heap à partir d'un tableau
    OUTPUT:
        aucun
***********************************************************************************************************************/
void algo_tri_heap_paterner(int tab[], int inf, int sup);

/***********************************************************************************************************************
    INPUT:
        - tab: tableau d'entiers
        - inf: indice de début du tableau
        - sup: indice de fin du tableau
    PROCESS:
        crée un heap à partir d'un tableau
    OUTPUT:
        aucun
***********************************************************************************************************************/
void algo_tri_heap_paterner_ameliore(int tab[], int inf, int sup);

/***********************************************************************************************************************
    INPUT:
        - tab: tableau d'entiers
        - n: taille du tableau
    PROCESS:
        tri un tableau d'entiers
    OUTPUT:
        aucun
***********************************************************************************************************************/
void algo_tri_heap_tri_epi(int tab[], int n);

/***********************************************************************************************************************
    INPUT:
        - a: pointeur sur un entier
        - b: pointeur sur un entier
    PROCESS:
        échange les valeurs de deux entiers
    OUTPUT:
        aucun
***********************************************************************************************************************/
void algo_tri_heap_echanger(int *a, int *b);

#endif //ALGORITHMIQUE_ALGO_TRI_HEAPSORT_H
