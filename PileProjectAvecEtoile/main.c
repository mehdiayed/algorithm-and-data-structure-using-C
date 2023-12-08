#include <stdio.h>
#include <stdlib.h>
#include "PileProjectAvecEtoile.h"

int main()
{
    Pile maPile;
    maPile = malloc(sizeof(struct Pile)); // Allocation de mémoire pour la pile
    if (maPile == NULL)
    {
        fprintf(stderr, "Erreur d'allocation de mémoire\n");
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

    // Test de dépilement
    depiler_Pile(maPile);

    // Afficher à nouveau le sommet de la pile après dépilement
    printf("Nouveau sommet de la pile : %d\n", Sommet_Pile(maPile));

    // Vérifier si la pile est vide
    if (Vide_Pile(maPile))
    {
        printf("La pile est vide.\n");
    }
    else
    {
        printf("La pile n'est pas vide.\n");
    }

    // Vérifier si la pile est pleine
    if (Pleine_Pile(maPile))
    {
        printf("La pile est pleine.\n");
    }
    else
    {
        printf("La pile n'est pas pleine.\n");
    }

    // Afficher la pile à la fin
    Afficher_Pile(maPile);

    // Libérer la mémoire
    free(maPile);
    maPile = NULL; // Définir le pointeur à NULL après la libération

    return 0;
}
