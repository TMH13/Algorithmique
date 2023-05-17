#ifndef ALGORITHMIQUE_PILE_H
#define ALGORITHMIQUE_PILE_H

#include "..\..\data.h"

/*********************************************************************************************************************

    On appelle PILE un ensemble formé d’un nombre variable, éventuellement nul, de données, sur lequel on peut
    effectuer les opérations suivantes :
        - Ajout d’une nouvelle donnée.
        - Test déterminant si la pile est vide ou non.
        - Consultation de la dernière donnée ajoutée et non supprimée depuis (donc la plus récente), s’il y en a une.
        - Suppression de la dernière donnée ajoutée et non encore supprimée, s’il y en a une.

    Pour créer une pile il suffit de mettre le pointeur qui la représente à NULL. Elle est vide.

    Une pile doit répondre au critère suivant :
        "Dernier entré, premier sorti" :
            Last In First Out (LIFO)

*********************************************************************************************************************/

/*********************************************************************************************************************
    INPUT :
        - un pointeur sur un pointeur sur un élément de type "Node" qui représente le sommet de la pile.
        - un pointeur sur un élément de type "Node" qui représente l'élément à empiler.
    PROCESS :
        - Empile l'élément au sommet de la pile.
    OUTPUT :
        - un entier qui vaut 1 si l'élément a été empilé, 0 sinon.
*********************************************************************************************************************/
int pile_empiler(Node **pile_ptr, Node *element);

/*********************************************************************************************************************
    INPUT :
        - un pointeur sur un élément de type "Node" qui représente le sommet de la pile.
    PROCESS :
        - Teste si la pile est vide.
    OUTPUT :
        - un entier qui vaut 1 si la pile est vide, 0 sinon.
*********************************************************************************************************************/
int pile_est_vide(Node *pile);

/*********************************************************************************************************************
    INPUT :
        - un pointeur sur un élément de type "Node" qui représente le sommet de la pile.
    PROCESS :
        - Retourne l'élément au sommet de la pile.
    OUTPUT :
        - un pointeur sur un élément de type "Node" qui représente l'élément au sommet de la pile.
*********************************************************************************************************************/
Node *pile_sommet_pile(Node *pile);

/*********************************************************************************************************************
    INPUT :
        - un pointeur sur un pointeur sur un élément de type "Node" qui représente le sommet de la pile.
    PROCESS :
        - Dépile l'élément au sommet de la pile.
    OUTPUT :
        - un pointeur sur un élément de type "Node" qui représente l'élément au sommet de la pile.
*********************************************************************************************************************/
Node *pile_depiler(Node **pile_ptr);

#endif //ALGORITHMIQUE_PILE_H
