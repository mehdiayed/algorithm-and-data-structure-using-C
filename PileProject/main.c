#include <stdio.h>
#include <stdlib.h>
#include "pile.h"

int main() {
    Pile maPile; // D�clarer une pile
    initializer_Pile(&maPile); // Initialiser la pile

    // Test d'empilage
    empiler_Pile(&maPile, 10);
    empiler_Pile(&maPile, 20);
    empiler_Pile(&maPile, 30);

    Afficher_Pile(maPile);
    // Afficher le sommet de la pile
    printf("Sommet de la pile : %d\n", Sommet_Pile(maPile));

    // Test de d�pilement
    depiler_Pile(&maPile);

    // Afficher � nouveau le sommet de la pile apr�s d�pilement
    printf("Nouveau sommet de la pile : %d\n", Sommet_Pile(maPile));

    // V�rifier si la pile est vide
    if (Vide_Pile(maPile)==1) {
        printf("La pile est vide.\n");
    } else {
        printf("La pile n'est pas vide.\n");
    }

    // V�rifier si la pile est pleine
    if (Pleine_Pile(maPile)) {
        printf("La pile est pleine.\n");
    } else {
        printf("La pile n'est pas pleine.\n");
    }
    Afficher_Pile(maPile);
    return 0;
}
