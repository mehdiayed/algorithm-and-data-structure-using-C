#include <stdio.h>
#include "ListeFunctions.h"
#include "PileWithList.h"

void initializer_Pile(Pile *p)
{
    p->sp=0; // pointeur
    init(&(p->l));
}

int empiler_Pile(Pile *p, int x)
{
    return ajouter_deb(&(p->l), x);
}

int depiler_Pile(Pile *p)
{
    return supprimer_deb(&(p->l));  // khatrik 3adit passage par adress donc t7ot &
}

int Sommet_Pile(Pile p)
{
    // Retourner la valeur du premier élément de la liste (sommet de la pile)
    if (p.l.head != NULL)
    {
        return p.l.head->data;
    }
    else
    {
        return -1;  // Par exemple, vous pouvez choisir de retourner -1 dans le cas d'une pile vide
    }
}


int Vide_Pile(Pile p)
{
   // printf("%d",vide(p.l));
    return vide(p.l);
}
void Afficher_Pile(Pile p)
{
    printf("Contenu de la pile :\n");

    if (Vide_Pile(p)==-1)
    {
        elem* courant = p.l.head;
        while (courant != NULL)
        {
            printf("%d ", courant->data);
            courant = courant->next;
        }
        printf("\n");
    }
    else
    {
        printf("La pile est vide. cc\n");
        
    }
}

/*void Afficher_Pile(Pile p)
{
    printf("Contenu de la pile :\n");

    if (Vide_Pile(p))
    {
        printf("La pile est vide.\n");
    }
    else
    {
        elem *courant = p.l.head;
        while (courant != NULL)
        {
            printf("%d ", courant->data);
            courant = courant->next;
        }
        printf("\n");
    }
}*/