#include "algo_tri_heapsort.h"

void algo_tri_heap_paterner(int *tab, int inf, int sup)
{
    int ipere = inf; // indice du père
    int ifils = ipere * 2 + 1; // indice du fils gauche

    while (ifils <= sup) // tant que le fils gauche existe
    {
        if (ifils < sup && tab[ifils + 1] > tab[ifils]) // si le fils droit existe et est plus grand que le fils gauche
            ifils++; // on prend le fils droit

        if (tab[ifils] > tab[ipere]) // si le fils est plus grand que le père
        {
            algo_tri_heap_echanger(&tab[ipere], &tab[ifils]); // on échange le père et le fils
            ipere = ifils; // le père devient le fils
            ifils = ipere * 2 + 1; // le fils devient le fils gauche
        }
        else
            ifils = sup + 1; // sinon, on sort de la boucle
    }
}

void algo_tri_heap_paterner_ameliore(int *tab, int inf, int sup)
{
    int ipere = inf; // indice du père
    int ifils = ipere * 2 + 1; // indice du fils gauche
    int tmp = tab[ipere]; // valeur du père

    while (ifils <= sup) // tant que le fils gauche existe
    {
        if (ifils < sup && tab[ifils + 1] > tab[ifils]) // si le fils droit existe et est plus grand que le fils gauche
            ifils++; // on prend le fils droit

        if (tab[ifils] > tmp) // si le fils est plus grand que le père
        {
            tab[ipere] = tab[ifils]; // on écrase le père avec le fils
            ipere = ifils; // le père devient le fils
            ifils = ipere * 2 + 1; // le fils devient le fils gauche
        }
        else
            ifils = sup + 1; // sinon, on sort de la boucle
    }

    tab[ipere] = tmp; // on place le père à sa place
}

void algo_tri_heap_tri_epi(int *tab, int n)
{
    int i;

    // création du heap
    for (i = n / 2 -1; i >= 0; i--)
    {
        algo_tri_heap_paterner_ameliore(tab, i, n);
    }

    // tri du heap
    for (i = n -1; i >= 1; i--)
    {
        algo_tri_heap_echanger(&tab[0], &tab[i]);
        algo_tri_heap_paterner_ameliore(tab, 0, i - 1);
    }
}

void algo_tri_heap_echanger(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
