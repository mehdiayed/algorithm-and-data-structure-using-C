#include "ListeFunctions.h"
#ifndef PileWithList_H_INCLUDED
#define PileWithList_H_INCLUDED

typedef struct Pile{
    int sp; // sp hia awil case fargha
    liste l;
} Pile ;

void initializer_Pile(Pile *p); // * passage par adresse non par valeur

int empiler_Pile(Pile *p,int x);

int depiler_Pile(Pile *p);

int Sommet_Pile(Pile p);

int Pleine_Pile(Pile p);

int Vide_Pile();

void Afficher_Pile(Pile p);



#endif // LISTE_H_INCLUDED
