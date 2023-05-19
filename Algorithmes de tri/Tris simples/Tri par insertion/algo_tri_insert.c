#include "algo_tri_insert.h"

void algo_tri_insert(int tab[], int taille_tab)
{
    int i, j, tmp;

    for ( j = 1; j < taille_tab; j++)
    {
        i = j - 1; // on initialise la position de l'élément précédent
        tmp = tab[j]; // on stocke la valeur de l'élément courant

        while (i >= 0 && tab[i] > tmp) // tant que l'élément précédent est supérieur à l'élément courant
        {
            tab[i + 1] = tab[i]; // on décale l'élément précédent vers la droite
            i--;
        }

        tab[i + 1] = tmp; // on insère l'élément courant à sa place
    }
}

void algo_tri_insert_ameliore(int tab[], int taille_tab)
{
    int i, j, tmp;

    tab[0] = -1; // on ajoute un élément fictif plus petit que tous les autres

    for ( j = 1; j < taille_tab; j++)
    {
        i = j - 1; // on initialise la position de l'élément précédent
        tmp = tab[j]; // on stocke la valeur de l'élément courant

        while (tab[i] > tmp) // tant que l'élément précédent est supérieur à l'élément courant
        {
            tab[i + 1] = tab[i]; // on décale l'élément précédent vers la droite
            i--;
        }

        tab[i + 1] = tmp; // on insère l'élément courant à sa place
    }
}