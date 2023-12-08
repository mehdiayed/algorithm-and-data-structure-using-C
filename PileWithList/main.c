#include <stdio.h>
#include <stdlib.h>
#include "PileWithList.h"
#include "ListeFunctions.h"

int main()
{
    Pile maPile;
    initializer_Pile(&maPile);


    empiler_Pile(&maPile, 10);
    empiler_Pile(&maPile, 20);
    empiler_Pile(&maPile, 30);

    Afficher_Pile(maPile);

    printf("Sommet de la pile : %d\n", Sommet_Pile(maPile));
    empiler_Pile(&maPile, 100);
    printf("Sommet de la pile : %d\n", Sommet_Pile(maPile));
    empiler_Pile(&maPile, 101);
    printf("Sommet de la pile : %d\n", Sommet_Pile(maPile));
    depiler_Pile(&maPile);


    printf("Nouveau sommet de la pile : %d\n", Sommet_Pile(maPile));



    Afficher_Pile(maPile);
    return 0;
}
