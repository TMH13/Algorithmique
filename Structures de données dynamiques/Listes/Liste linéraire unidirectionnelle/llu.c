#include "llu.h"

/***********************************************************************************************************************
    Voir llu.h pour la documentation
***********************************************************************************************************************/

int liste_est_vide(Node *liste)
{
    return liste == NULL; // retourne 1 si la liste est vide, 0 sinon
}

int liste_insertion_triee(Node **liste_ptr, Node *element)
{
    Node *new = NULL; // pointeur vers le nouvel élément
    Node *cur = NULL; // pointeur vers l'élément courant
    Node *pre = NULL; // pointeur vers l'élément précédent

    new = (Node *) malloc(sizeof(Node)); // allocation de la mémoire pour le nouvel élément

    if (new == NULL) // si l'allocation a échoué
        return 0;

    // copie des données de l'élément à insérer dans le nouvel élément
    strcpy(new->nom, element->nom);
    new->age = element->age;

    // insertion du nouvel élément dans la liste

    // si la liste est vide ou si le nouvel élément doit être inséré en tête de liste
    if (*liste_ptr == NULL || strcmp(new->nom, (*liste_ptr)->nom) < 0 ||
        (strcmp(new->nom, (*liste_ptr)->nom) == 0 && new->age < (*liste_ptr)->age))

    {
        new->next = *liste_ptr; // le champ next du nouvel élément pointe vers le premier élément de la liste
        *liste_ptr = new; // le pointeur vers la liste pointe vers le nouvel élément
    }
    else // si le nouvel élément doit être inséré ailleurs dans la liste
    {
        cur = *liste_ptr; // le pointeur courant pointe vers le premier élément de la liste

        // Cherche l'élément après lequel insérer le nouvel élément
        while (cur != NULL && strcmp(new->nom, cur->nom) > 0)
        {
            pre = cur; // le pointeur précédent pointe vers l'élément courant
            cur = cur->next; // le pointeur courant pointe vers l'élément suivant
        }
        while (cur != NULL && strcmp(new->nom, cur->nom) == 0 && new->age >= cur->age)
        {
            pre = cur;
            cur = cur->next;
        }
        new->next = cur; // le champ next du nouvel élément pointe vers l'élément suivant
        pre->next = new; // le champ next de l'élément précédent pointe vers le nouvel élément
    }
    return 1; // retourne 1 si l'élément a été inséré dans la liste
}

Node *liste_recherche(Node *liste, char *nom_element)
{
    // Parcours de la liste jusqu'à trouver l'élément ou jusqu'à la fin de la liste
    while (liste != NULL && strcmp(nom_element, liste->nom) > 0)
        liste = liste->next;

    // Si l'élément a été trouvé, retourne un pointeur vers l'élément
    if (liste != NULL && strcmp(nom_element, liste->nom) == 0)
        return liste;

    return NULL; // sinon retourne NULL
}

void liste_suppression(Node **liste_ptr, char *nom_element)
{
    Node *cur = NULL; // pointeur vers l'élément courant
    Node *pre = NULL; // pointeur vers l'élément précédent

    // si la liste n'est pas vide
    if(*liste_ptr != NULL)
    {
        cur = *liste_ptr; // le pointeur courant pointe vers le premier élément de la liste

        // Cherche l'élément à supprimer
        while (cur != NULL && strcmp(nom_element, cur->nom) > 0)
        {
            pre = cur; // le pointeur précédent pointe vers l'élément courant
            cur = cur->next; // le pointeur courant pointe vers l'élément suivant
        }
        // si l'élément a été trouvé
        if (cur != NULL && strcmp(nom_element, cur->nom) == 0)
        {
            // si l'élément à supprimer est en tête de liste
            if (pre == NULL)
                *liste_ptr = cur->next; // le pointeur vers la liste pointe vers l'élément suivant
            else
                pre->next = cur->next; // le champ next de l'élément précédent pointe vers l'élément suivant

            free(cur); // libère la mémoire occupée par l'élément à supprimer
        }
    }
}

void liste_affichage(Node *liste)
{
    while (liste != NULL)
    {
        printf("%s\n", liste->nom);
        printf("%d\n", liste->age);
        liste = liste->next;
    }
}
