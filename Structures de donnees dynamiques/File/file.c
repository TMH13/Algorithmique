#include "file.h"

/***********************************************************************************************************************
    Voir file.h pour la documentation
***********************************************************************************************************************/

int file_enfiler(Node **tete_ptr, Node **queue_ptr, Node *element)
{
    Node *new = NULL; // pointeur vers le nouvel élément

    new = (Node *)malloc(sizeof(Node)); // allocation de la mémoire pour le nouvel élément

    if(new == NULL) // si l'allocation a échoué
        return 0;

    // copie des données de l'élément à enfiler dans le nouvel élément
    strcpy(new->nom, element->nom);
    new->age = element->age;
    new->next = NULL;

    if(file_est_vide(*tete_ptr)) // si la file est vide
    {
        *tete_ptr = new; // la tête de la file pointe vers le nouvel élément
        *queue_ptr = new; // la queue de la file pointe vers le nouvel élément
    }
    else
    {
        (*queue_ptr)->next = new; // le dernier élément de la file pointe vers le nouvel élément
        *queue_ptr = new; // la queue de la file pointe vers le nouvel élément
    }

    return 1; // l'élément a été ajouté à la file
}

int file_est_vide(Node *tete)
{
    return tete == NULL; // retourne 1 si la file est vide, 0 sinon
}

Node *file_tete_file(Node *tete)
{
    if(file_est_vide(tete)) // si la file est vide
        return NULL;

    return tete; // retourne la tête de la file
}

Node *file_queue_file(Node *queue)
{
    if(file_est_vide(queue)) // si la file est vide
        return NULL;

    return queue; // retourne la queue de la file
}

Node *file_defiler(Node **tete_ptr, Node **queue_ptr)
{
    Node *tmp = NULL; // pointeur vers l'élément à défiler

    if(file_est_vide(*tete_ptr)) // si la file est vide
        return NULL;

    tmp = *tete_ptr; // l'élément à défiler est la tête de la file
    *tete_ptr = (*tete_ptr)->next; // la tête de la file pointe vers l'élément suivant

    if(*tete_ptr == NULL) // si la file est vide
        *queue_ptr = NULL; // la queue de la file pointe vers NULL

    return tmp; // retourne l'élément à défiler, il peut être ensuite libéré
}

