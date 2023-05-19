#ifndef ALGORITHMIQUE_RECURSIV_H
#define ALGORITHMIQUE_RECURSIV_H

/***********************************************************************************************************************
    DÉFINITION:

    Une procédure est dite récursive quand, de manière directe ou indirecte, elle s’appelle elle-même.

    Un problème se prête particulièrement bien à l’analyse récursive lorsqu’il peut être décomposé en plusieurs
    sous-problèmes de même type, mais de taille plus petite !

    Dans un tel cas, la méthode générale comportera trois étapes :
        - Paramétrage du problème, faisant apparaître les différents éléments dont dépend la solution, et en
        particulier la taille du problème à résoudre, qui (dans les cas favorables) devra décroître à chaque appel
        récursif.
        - Recherche d’un cas trivial et de sa solution. C’est souvent l’étape clé de l’algorithme. Un "cas trivial"
        est un cas qui peut être réglé directement, sans appel récursif. Ce sera souvent le cas où la taille du
        problème est nulle ou égale à 1.
        - Décomposition du cas général visant à le ramener à un ou plusieurs problèmes, en principe plus simples
        (de taille plus petite).

    INCONVÉNIENT DES FONCTIONS RÉCURSIVES:

    L'inconvénient majeur des fonctions récursives découle directement de sa réalisation pratique.

    En effet, lors de chaque appel récursif, nous avons dit que l'état des variables locales, paramètres, ...
    doit être conservé.

    Dans la mémoire centrale de l'ordinateur, dans la partie "pile", là où sont stockées les valeurs des variables
    locales et paramètres, le programme va, comme décrit au paragraphe précédent, empiler les valeurs lors de chaque
    appel récursif.

    Lors d'un retour d'appel récursif, les valeurs sont enlevées de la pile, et l'on peut à nouveau accéder aux valeurs
    précédentes correspondant à l'incarnation précédente de la fonction, dans laquelle on vient de revenir.

    Plus le niveau de récursivité sera élevé (par exemple, plus n est élevé dans le calcul de la factorielle), plus
    l'espace nécessaire en mémoire centrale sera lui aussi élevé !

    Lorsque nous écrivons des fonctions récursives, nous devons donc rester conscient du fait que celles-ci sont de
    grandes consommatrices d'espace mémoire !

    Il sera même parfois nécessaire d'envisager une programmation évitant la récursivité !
 ***********************************************************************************************************************/

/***********************************************************************************************************************
    INPUT:
        - n: nombre dont on veut calculer la factorielle
    PROCESS:
        calcule la factorielle de n
    OUTPUT:
        factorielle de n
 ***********************************************************************************************************************/

int recursivite_factorielle(int n);

#endif //ALGORITHMIQUE_RECURSIV_H
