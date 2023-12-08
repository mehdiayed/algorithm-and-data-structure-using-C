#ifndef PILEAVECETOILE_H_INCLUDED
#define PILEAVECETOILE_H_INCLUDED

#define Max_size 50

typedef struct Pile
{
    int sp;
    int tab[Max_size];
} *Pile;

void initializer_Pile(Pile p);

int empiler_Pile(Pile p, int x);

int depiler_Pile(Pile p);

int Sommet_Pile(Pile p);

int Pleine_Pile(Pile p);

int Vide_Pile(Pile p);

void Afficher_Pile(Pile p);

#endif // PILEAVECETOILE_H_INCLUDED
