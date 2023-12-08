#include <stdio.h>
#include <stdlib.h>
#include "ListeV2.h"

int main()
{
    liste maListe;
    init(&maListe);

    // Ajout d'�l�ments au d�but de la liste
    ajouter_deb(&maListe, 1);
    ajouter_deb(&maListe, 2);
    ajouter_deb(&maListe, 3);
    
    // Affichage de la liste
    afficher_liste(maListe);
    
    // Ajout d'�l�ments � la fin de la liste
    
    ajouter_fin(maListe, 40);
    // Affichage de la liste
    afficher_liste(maListe);
    
    ajouter_fin(maListe, 50);

   // Affichage de la liste
    afficher_liste(maListe);
    
    // Ajout d'�l�ments � une position sp�cifique
    printf("affichage de la liste apres l'ajout a la position 2 \n ");
    ajouter_pos(maListe, 2, 25);
   // Affichage de la liste
    afficher_liste(maListe);
    // Suppression d'�l�ments
    printf("\n affichage de la liste apres la suppression au debut \n ");
    supprimer_deb(&maListe);
    // Affichage de la liste
    afficher_liste(maListe);
    printf("\n affichage de la liste apres la suppression a la fin \n ");
    supprimer_fin(maListe);
    // Affichage de la liste
    afficher_liste(maListe);
    printf("affichage de la liste apres la suppression a la position 2 \n ");

    supprimer_pos(maListe, 2);
    // Affichage de la liste
    afficher_liste(maListe);

    // V�rification si la liste est vide
    if (vide(maListe) == 0)
    {
        printf("La liste n'est pas vide.\n");
    }
    else
    {
        printf("La liste est vide.\n");
    }
// Affichage de la liste
    afficher_liste(maListe);
    // Lib�ration de la m�moire
    while (maListe.head != NULL)
    {
        supprimer_deb(&maListe);
    }

    return 0;
}
