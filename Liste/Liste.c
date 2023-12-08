#include <stdio.h>
#include "Liste.h"

void initialize_liste(Liste *L)
{
    L->Tete = NULL;
}

int Add_Head(Liste *L, int value)
{
    cellule * c = malloc(sizeof(cellule));  // cellula jdida //
    c->valeur=value;
    c->next=L->Tete;
    L->Tete = c;


}

int Add_Queue(Liste L, int Value)
{
    cellule * c ;
    cellule * boucle ;

    boucle = L.Tete;

    c = malloc(sizeof(cellule));

    if(c==NULL)
    {
        return -1;
    }
    c -> valeur=Value;
    c -> next=NULL;
    while(boucle->next != NULL)
    {
        boucle = boucle->next;
    }
    boucle ->next=c;
    return 1;
}

int Add_Position(Liste L, int value, int Position)
{
    if (Position < 0)
    {
        return -1; // Invalid position
    }

    cellule* c = malloc(sizeof(cellule));
    if (c == NULL)
    {
        return -1; // Allocation failure
    }

    c->valeur = value;

    if (Position == 0)
    {
        c->next = L.Tete;
        L.Tete = c;
    }
    else
    {
        cellule* boucle = L.Tete;
        for (int i = 0; i < Position - 1 && boucle != NULL; i++)
        {
            boucle = boucle->next;
        }

        if (boucle == NULL)
        {
            free(c);
            return -1; // Invalid position
        }

        c->next = boucle->next;
        boucle->next = c;
    }

    return 1; // Success


}

int Delete_Head(Liste *L)
{
    cellule * c ;
    c = L->Tete;
    L->Tete = (L->Tete)->Tete; // par adresse passage ta3mil flech flech kif yibda passage par valeur ta3mil point point kima fi suppression en queue
    free(c);
}*/
int Delete_Head(Liste *L)
{
    cellule *c;
    c = L->Tete;
    L->Tete = (L->Tete)->next;
    free(c);
    return 1; // Add a return statement for consistency
}

int Delete_Queue(Liste L)
{

    if (L.Tete == NULL)
    {
        return -1; // Empty list
    }

    if (L.Tete->next == NULL)
    {
        free(L.Tete);
        L.Tete = NULL;
        return 1; // Success
    }

    cellule *boucle = L.Tete;
    while (boucle->next->next != NULL)
    {
        boucle = boucle->next;
    }

    free(boucle->next);
    boucle->next = NULL;
    return 1; // Success
}


int Delete_Position(Liste L, int Position)
{
    if (Position < 0 || L->Tete == NULL)
    {
        return -1; // Invalid position or empty list
    }

    if (Position == 0)
    {
        cellule* c = L->Tete;
        L->Tete = c->next;
        free(c);
        return 1; // Success
    }

    cellule* boucle = L->Tete;
    for (int i = 0; i < Position - 1 && boucle != NULL; i++)
    {
        boucle = boucle->next;
    }

    if (boucle == NULL || boucle->next == NULL)
    {
        return -1; // Invalid position
    }

    cellule* c = boucle->next;
    boucle->next = c->next;
    free(c);
    return 1; // Success
}

int IsEmpty_Liste(Liste L)
{
    return L.Tete == NULL ? 1 : 0;
}

