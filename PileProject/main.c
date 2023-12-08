#include <stdio.h>
#include <stdlib.h>
#include "pile.h"

int main() {
    Pile maPile; // Déclarer une pile
    initializer_Pile(&maPile); // Initialiser la pile

    // Test d'empilage
    empiler_Pile(&maPile, 10);
    empiler_Pile(&maPile, 20);
    empiler_Pile(&maPile, 30);

    Afficher_Pile(maPile);
    // Afficher le sommet de la pile
    printf("Sommet de la pile : %d\n", Sommet_Pile(maPile));

    // Test de dépilement
    depiler_Pile(&maPile);

    // Afficher à nouveau le sommet de la pile après dépilement
    printf("Nouveau sommet de la pile : %d\n", Sommet_Pile(maPile));

    // Vérifier si la pile est vide
    if (Vide_Pile(maPile)==1) {
        printf("La pile est vide.\n");
    } else {
        printf("La pile n'est pas vide.\n");
    }

    // Vérifier si la pile est pleine
    if (Pleine_Pile(maPile)) {
        printf("La pile est pleine.\n");
    } else {
        printf("La pile n'est pas pleine.\n");
    }
    Afficher_Pile(maPile);
    return 0;
}
