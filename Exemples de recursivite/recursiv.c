#include "recursiv.h"

int recursivite_factorielle(int n)
{
    if (n == 0)
        return 1;
    else
        return n * recursivite_factorielle(n - 1);
}
