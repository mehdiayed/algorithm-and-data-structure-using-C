#include <stdio.h>
#include "PileProjectAvecEtoile.h"

void initializer_Pile(Pile p)
{
    p->sp = 0;
}

int empiler_Pile(Pile p, int x)
{
    if (Pleine_Pile(p) == 0)
    {
        p->tab[p->sp] = x;
        p->sp++;
        return 1;
    }
    else
    {
        return 0;
    }
}

int depiler_Pile(Pile p)
{
    if (Vide_Pile(p) == 0)
    {
        p->sp--;
        return 1;
    }
    return 0;
}

int Sommet_Pile(Pile p)
{
    return p->tab[p->sp - 1];
}

int Pleine_Pile(Pile p)
{
    return (p->sp == Max_size);
}

int Vide_Pile(Pile p)
{
    return (p->sp == 0);
}

void Afficher_Pile(Pile p)
{
    printf("Contenu de la pile :\n");

    if (Vide_Pile(p))
    {
        printf("La pile est vide.\n");
    }
    else
    {
        for (int i = 0; i < p->sp; i++)
        {
            printf("%d ", p->tab[i]);
        }
        printf("\n");
    }
}
