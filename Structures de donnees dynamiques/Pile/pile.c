#include "pile.h"

/***********************************************************************************************************************
    Voir pile.h pour la documentation
***********************************************************************************************************************/

int pile_empiler(Node **pile_ptr, Node *element)
{
    Node *new = NULL;

    // Réserve de la mémoire pour un nouvel élément de type "Node"
    new = (Node *)malloc(sizeof(Node));

    // Vérifie que la mémoire a bien été allouée
    if (new == NULL)
        return 0;   // Retourne 0 si la mémoire n'a pas été allouée

    // Copie les données de l'élément à empiler dans le nouvel élément
    strcpy(new->nom, element->nom);
    new->age = element->age;

    // Fait pointer le nouvel élément vers l'ancien sommet de la pile
    new->next = *pile_ptr;

    // Fait pointer le sommet de la pile vers le nouvel élément
    *pile_ptr = new;

    return 1; // Retourne 1 si l'élément a été empilé
}

int pile_est_vide(Node *pile)
{
    return pile == NULL; // Retourne 1 si la pile est vide, 0 sinon
}

Node *pile_sommet_pile(Node *pile)
{
    return pile; // Retourne l'élément au sommet de la pile, NULL si la pile est vide
}

Node *pile_depiler(Node **pile_ptr)
{
    Node *tmp = NULL; // Pointeur temporaire

    if(pile_est_vide(*pile_ptr)) // si la pile est vide
        return NULL;

    tmp = *pile_ptr; // Retient l'élément au sommet de la pile

    *pile_ptr = (*pile_ptr)->next; // Fait pointer le sommet de la pile vers l'élément suivant

    return tmp; // Retourne l'élément au sommet de la pile, il pourra être libéré par la suite
}
