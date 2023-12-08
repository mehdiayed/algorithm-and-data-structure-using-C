#include <stdio.h>
#include <stdlib.h>
#include "PileProjectAvecEtoile.h"

int main()
{
    Pile maPile;
    maPile = malloc(sizeof(struct Pile)); // Allocation de m�moire pour la pile
    if (maPile == NULL)
    {
        fprintf(stderr, "Erreur d'allocation de m�moire\n");
        exit(EXIT_FAILURE);
    }
    initializer_Pile(maPile);

    // Test d'empilage
    empiler_Pile(maPile, 10);
    empiler_Pile(maPile, 20);
    empiler_Pile(maPile, 30);

    // Afficher la pile
    Afficher_Pile(maPile);

    // Afficher le sommet de la pile
    printf("Sommet de la pile : %d\n", Sommet_Pile(maPile));

    // Test de d�pilement
    depiler_Pile(maPile);

    // Afficher � nouveau le sommet de la pile apr�s d�pilement
    printf("Nouveau sommet de la pile : %d\n", Sommet_Pile(maPile));

    // V�rifier si la pile est vide
    if (Vide_Pile(maPile))
    {
        printf("La pile est vide.\n");
    }
    else
    {
        printf("La pile n'est pas vide.\n");
    }

    // V�rifier si la pile est pleine
    if (Pleine_Pile(maPile))
    {
        printf("La pile est pleine.\n");
    }
    else
    {
        printf("La pile n'est pas pleine.\n");
    }

    // Afficher la pile � la fin
    Afficher_Pile(maPile);

    // Lib�rer la m�moire
    free(maPile);
    maPile = NULL; // D�finir le pointeur � NULL apr�s la lib�ration

    return 0;
}
