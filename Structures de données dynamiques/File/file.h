#ifndef ALGORITHMIQUE_FILE_H
#define ALGORITHMIQUE_FILE_H

#include "..\..\data.h"

/***********************************************************************************************************************

    On appelle FILE un ensemble formé d’un nombre variable, éventuellement nul, de données, sur lequel on peut
    effectuer les opérations suivantes :
        - Ajout d’une nouvelle donnée.
        - Test déterminant si la file est vide ou non.
        - Consultation de la première donnée ajoutée et non supprimée depuis (donc la plus ancienne) s’il y en a une.
        - Suppression de la première donnée ajoutée et non encore supprimée depuis, s’il y en a une.

   Pour créer une file il suffit de mettre les pointeurs qui la représente à NULL. Elle est vide.

    Une file doit répondre au critère suivant :
        "Premier entré, premier sorti" :
            First In First Out (FIFO

 **********************************************************************************************************************/


/***********************************************************************************************************************
    INPUT:
        - tete_ptr: pointeur vers la tête de la file
        - queue_ptr: pointeur vers la queue de la file
        - element: pointeur vers l'élément à enfiler
    PROCESS:
        ajoute un élément à la queue de la file
    OUTPUT:
        - 1: si l'élément a été ajouté à la file
        - 0: si l'élément n'a pas été ajouté à la file
***********************************************************************************************************************/
int file_enfiler(Node **tete_ptr, Node **queue_ptr, Node *element);

/***********************************************************************************************************************
    INPUT:
        - tete_ptr: pointeur vers la tête de la file
    PROCESS:
        teste si la file est vide
    OUTPUT:
        - 1: si la file est vide
        - 0: si la file n'est pas vide
***********************************************************************************************************************/
int file_est_vide(Node *tete);

/***********************************************************************************************************************
    INPUT:
        - tete_ptr: pointeur vers la tête de la file
    PROCESS:
        consulte la tête de la file
    OUTPUT:
        - NULL: si la file est vide
        - Node *: pointeur vers la tête de la file
***********************************************************************************************************************/
Node *file_tete_file(Node *tete);

/***********************************************************************************************************************
    INPUT:
        - queue_ptr: pointeur vers la queue de la file
    PROCESS:
        consulte la queue de la file
    OUTPUT:
        - NULL: si la file est vide
        - Node *: pointeur vers la queue de la file
***********************************************************************************************************************/
Node *file_queue_file(Node *queue);

/***********************************************************************************************************************
    INPUT:
        - tete_ptr: pointeur vers la tête de la file
        - queue_ptr: pointeur vers la queue de la file
    PROCESS:
        retire l'élément en tête de la file
    OUTPUT:
        - NULL: si la file est vide
        - Node *: pointeur vers la tête de la file
***********************************************************************************************************************/
Node *file_defiler(Node **tete_ptr, Node **queue_ptr);

#endif //ALGORITHMIQUE_FILE_H
