#include "algo_tri_bulle.h"

void algo_tri_bulle(int tab[], int taille_tab)
{
    int i, j, temp;

    for (j = taille_tab; j > 0; j--)
    {
        for (i = 0; i < j - 1; i++)
        {
            if (tab[i] > tab[i + 1]) // si l'élément courant est supérieur à l'élément suivant
            {
                // on échange les deux éléments
                temp = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = temp;
            }
        }
    }
}

void algo_tri_bulle_ameliore(int tab[], int taille_tab)
{
    int i, j = taille_tab, temp, echange = 1;

    while (echange == 1) // tant qu'il y a eu un échange
    {
        echange = 0;
        for (i = 0; i < j - 1; i++)
        {
            if (tab[i] > tab[i + 1]) // si l'élément courant est supérieur à l'élément suivant
            {
                temp = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = temp;
                echange = 1; // on indique qu'il y a eu un échange
            }
        }
        j--;
    }
}
