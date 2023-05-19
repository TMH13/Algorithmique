#ifndef ALGORITHMIQUE_LLU_H
#define ALGORITHMIQUE_LLU_H

#include "..\..\..\data.h"

/***********************************************************************************************************************

    Une liste linéaire est la représentation informatique d’un ensemble fini et ordonné
    d’éléments de même type.

    On dit que la liste est linéaire unidirectionnelle si chaque enregistrement est capable de
    donner l'emplacement de l'enregistrement suivant ce qui constitue un chaînage. Pour connaître une
    telle liste, il suffira de connaître l'emplacement de son premier enregistrement, inversement, elle
    ne pourra pas être connue si on ne connaît pas celui-ci. On notera en abrégé L.L.U.

    Pour créer une liste il suffit de mettre le pointeur qui la représente à NULL. Elle est vide.

    Les opérations principales que l'on peut effectuer sur une liste linéaire sont :
        - Test de liste vide
        - Insertion d'un élément dans une liste linéaire
        - Recherche d'un élément dans une liste linéaire
        - Suppression d'un élément dans une liste linéaire
        - Affichage d'une liste linéaire

    La liste est considérée comme triée sur le nom puis sur l'âge.

 **********************************************************************************************************************/

/***********************************************************************************************************************
    INPUT:
        - liste: pointeur vers la liste
    PROCESS:
        teste si la liste est vide
    OUTPUT:
        - 1: si la liste est vide
        - 0: si la liste n'est pas vide
***********************************************************************************************************************/
int liste_est_vide(Node *liste);

/***********************************************************************************************************************
    INPUT:
        - liste_ptr: pointeur vers la liste
        - element: pointeur vers l'élément à insérer
    PROCESS:
        insère un élément dans une liste triée
    OUTPUT:
        - 1: si l'élément a été inséré dans la liste
        - 0: si l'élément n'a pas été inséré dans la liste
***********************************************************************************************************************/
int liste_insertion_triee(Node **liste_ptr, Node *element);

/***********************************************************************************************************************
    INPUT:
        - liste: pointeur vers la liste
        - nom_element: nom de l'élément à rechercher
    PROCESS:
        recherche un élément dans une liste triée
    OUTPUT:
        - pointeur vers l'élément recherché si l'élément est trouvé
        - NULL si l'élément n'est pas trouvé
***********************************************************************************************************************/
Node * liste_recherche(Node *liste, char *nom_element);


/***********************************************************************************************************************
    INPUT:
        - liste_ptr: pointeur vers la liste
        - nom_element: nom de l'élément à supprimer
    PROCESS:
        supprime un élément dans une liste triée
    OUTPUT:
        - aucune
***********************************************************************************************************************/
void liste_suppression(Node **liste_ptr, char *nom_element);

/***********************************************************************************************************************
    INPUT:
        - liste: pointeur vers la liste
    PROCESS:
        affiche une liste
    OUTPUT:
        - aucune
***********************************************************************************************************************/
void liste_affichage(Node *liste);

#endif //ALGORITHMIQUE_LLU_H
