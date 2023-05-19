#include "algo_tri_extract.h"

void algo_tri_extract(int tab[], int taille_tab)
{
    int i, j, indice_max, max;

    for (j = taille_tab; j > 0; j--)
    {
        max = tab[0]; // on suppose que le maximum est le premier élément
        indice_max = 0;

        for (i = 1; i < j; i++)
        {
            if (tab[i] > max) // si l'élément courant est supérieur au maximum
            {
                max = tab[i]; // on met à jour le maximum
                indice_max = i;
            }
        }

        tab[indice_max] = tab[j - 1]; // on échange le maximum avec le dernier élément
        tab[j - 1] = max;
    }
}